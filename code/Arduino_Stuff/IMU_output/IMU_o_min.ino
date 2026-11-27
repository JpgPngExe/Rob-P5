#include <ESP32Time.h>
#include "time.h"
#include <WiFi.h>

// =====================================================================
//  VERSION 4 — METODE A (S/P-vinkel uden fælles global reference)
//
//  NYT I VERSION 3: IMU1 er drejet 180° om z, så BEGGE x-akser nu peger
//  mod albuen, og de to sensorer er monteret ens. Det fjerner den faste
//  monteringsforskel på 180° og gør formlerne enklere. Ændringerne fra
//  version 2 er markeret med  // V3:
//
//  NYT I VERSION 4: oprydning. Alt der ikke længere bruges, er fjernet
//  (DMP-quaternions, gravity/linear accel, Euler/YPR/teapot-output,
//  interrupt-kode, ubrugte variable og udkommenterede linjer).
//
//  Bygget direkte på den oprindelige kode. Ændringer er markeret:
//    // NY:      tilføjet
//    // ÆNDRET:  ændret i forhold til den oprindelige kode
//    // FJERNET: ikke længere i brug, med begrundelse
//  Alt andet er som i den oprindelige kode.
//
//  HVAD ER ÆNDRET OVERORDNET?
//  Før: Den relative orientering blev beregnet som qRel = q1^-1 * q2 ud fra
//  DMP'ens quaternions. Det kræver, at de to DMP'er har SAMME globale
//  reference. Det har de ikke: uden magnetometer har hver DMP sin egen
//  "nord"-retning, som driver uafhængigt.
//
//  Nu: Vi bruger kun DMP'en til at hente rå gyro- og accelerometerdata.
//  Den relative orientering beskrives med ÉN vinkel, theta (S/P-vinklen),
//  som beregnes ud fra rådata (se noterne):
//    - gyro:          theta_dot = gyro2.x - gyro1.x         (hurtig, driver)
//    - accelerometer: theta_acc = phi2 - phi1 - theta0      (langsom, driver ikke)
//    - de to kombineres i et komplementærfilter
//  qRel beregnes derefter UD FRA theta, og resten af koden (velRel, accRel,
//  quaternion_rotate, output) bruges som før.
//
//  NOTATION (som i noterne)
//    IMU1 = mpu  (0x68), proksimal (mod albuen)
//    IMU2 = mpu2 (0x69), distal    (mod håndleddet)
//    theta : S/P-vinkel, rotation om x1 mellem de to, 0 ved opstart [rad]
//            Positiv theta = rotation om x1 efter højrehåndsreglen, og x1
//            peger MOD ALBUEN. Om det er supination eller pronation
//            afhænger af venstre/højre arm — tjek med et forsøg.
//    phi_i : hvor meget IMU i hælder om sin egen x-akse = atan2(f_y, f_z)
//    f_i   : accelerometermåling fra IMU i (inkl. tyngdekraft) [m/s^2]
//    P_i   : punkt på rotationsaksen lige under IMU i, afstand d_i langs -z
//
//  FORUDSÆTNING: akserne sidder som beskrevet (set fra albue mod håndled,
//  håndfladen nedad). V3: begge sensorer ens:
//                     IMU1 x mod albue, y højre, z op.
//                     IMU2 x mod albue, y højre, z op.
//
//  OPSTART: hold armen STILLE i 0-stillingen indtil "Klar" vises.
// =====================================================================

// I2C device class (I2Cdev) demonstration Arduino sketch for MPU6050 class using DMP (MotionApps v2.0)
// 6/21/2012 by Jeff Rowberg <jeff@rowberg.net>
// Updates should (hopefully) always be available at https://github.com/jrowberg/i2cdevlib
//

/* ============================================
I2Cdev device library code is placed under the MIT license
Copyright (c) 2012 Jeff Rowberg

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
===============================================
*/

// I2Cdev and MPU6050 must be installed as libraries, or else the .cpp/.h files
// for both classes must be in the include path of your project
#include "I2Cdev.h"
#include "MPU6050_6Axis_MotionApps20.h"
#include "Arduino.h"
//#include "MPU6050.h" // not necessary if using MotionApps include file

// Arduino Wire library is required if I2Cdev I2CDEV_ARDUINO_WIRE implementation
// is used in I2Cdev.h
#if I2CDEV_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
    #include "Wire.h"
#endif

#include <Wire.h>

ESP32Time rtc;


// class default I2C address is 0x68
// specific I2C addresses may be passed as a parameter here
// AD0 low = 0x68 (default for SparkFun breakout and InvenSense evaluation board)
// AD0 high = 0x69
MPU6050 mpu;
MPU6050 mpu2(0x69); // <-- use for AD0 high


// Wi-Fi credentials
const char *ssid = "TP-Link_2792";
const char *password = "46402516";

// NTP settings
const char *ntpServer = "pool.ntp.org";
const long gmtOffset_sec = 3600;      // GMT+1, same offset as the original page
const int daylightOffset_sec = 0;     // adjust if DST is needed
struct timeval tv;

#define LED_PIN 13 // (Arduino is 13, Teensy is 11, Teensy++ is 6)
bool blinkState = false;


// =====================================================================
// NY: INDSTILLINGER TIL METODE A
// =====================================================================

// Omregning fra rå værdier til SI. Samme tal som I brugte ved print før
// (131 ved ±250 °/s, 16384 ved ±2 g). De skal passe med måleområderne,
// der sættes i setup().
// TJEK: læg en sensor stille. Længden af accelerometermålingen skal være
// ca. 9,81 m/s^2. Er den ca. 19,6, leverer DMP-pakken 8192 pr. g i stedet,
// og ACC_LSB skal ændres. Tilsvarende for gyroen: drej en sensor 90° og
// se om theta ændres 90°.
const float GYRO_LSB = 131.0;      // rå enheder pr. °/s
const float ACC_LSB  = 16384.0;    // rå enheder pr. g
const float G_SI     = 9.80665;    // tyngdeacceleration [m/s^2]

// Afstand fra IMU ned til rotationsaksen [m] (d_i i noterne). GÆT — skal måles.
const float D1 = 0.035;
const float D2 = 0.025;

// Komplementærfilter: tidskonstant tau [s].
// Ændringer hurtigere end tau kommer fra gyroen, langsommere fra accelerometeret.
const float TAU = 1.0;

// Lavpasfilter på gyro før den differentieres til vinkelacceleration [Hz].
// Differentiering forstærker støj, derfor glattes først.
const float ALFA_LAVPAS_HZ = 20.0;

// Hvornår må accelerometeret bruges til at rette theta?
//   - længden af målingen må højst afvige ACC_TOLERANCE fra g
//     (ellers accelererer armen, og hældningen kan ikke aflæses)
//   - delen i yz-planet skal være mindst RHO_MIN
//     (ellers står armen næsten lodret, og hældningen om aksen er udefineret)
const float ACC_TOLERANCE = 0.15 * G_SI;
const float RHO_MIN       = 0.5  * G_SI;

// Antal pakker til at måle theta0 ved opstart
const int THETA0_SAMPLES = 200;


// MPU control/status vars
bool dmpReady = false;  // set true if DMP init was successful
uint8_t devStatus;      // return status after each device operation (0 = success, !0 = error)
uint8_t devStatus2;      // return status after each device operation (0 = success, !0 = error)
uint8_t fifoBuffer[64]; // FIFO storage buffer
uint8_t fifoBuffer2[64]; // FIFO storage buffer

// orientation/motion vars
VectorFloat velRel;          // relativ vinkelhastighed [rad/s]
VectorFloat accRel;          // relativ acceleration mellem P2 og P1 [m/s^2]
VectorInt16 gyro1, gyro2;    // rå gyro fra DMP-pakken
VectorInt16 aa1, aa2;        // rå accelerometer fra DMP-pakken
float vx_new;                // resultat fra quaternion_rotate
float vy_new;
float vz_new;

// NY: tilstand for metode A (skal huskes fra sample til sample)
float theta  = 0.0;            // S/P-vinkel, filterets estimat [rad]
float theta0 = 0.0;            // accelerometer-vinklen i 0-stillingen [rad]
float forrigeThetaDot = 0.0;   // til trapezintegration i filteret
unsigned long forrigeTid_us = 0;
bool foersteSample = true;
VectorFloat gyroGlat1, gyroGlat2;      // lavpasfiltreret gyro [rad/s]
VectorFloat forrigeGyroGlat1, forrigeGyroGlat2;


// ================================================================
// NY: HJÆLPEFUNKTIONER TIL METODE A
// ================================================================

// Lægger en vinkel tilbage i (-pi, pi]. Vinkler "går rundt": 190° og -170°
// er samme stilling. Uden det kan filteret tro, to næsten ens vinkler er
// 360° fra hinanden.
float wrapPi(float v) {
    return atan2(sin(v), cos(v));
}

// Omregner rå DMP-værdier til SI
VectorFloat gyroTilSI(VectorInt16 g) {          // -> rad/s
    return VectorFloat(g.x / GYRO_LSB * DEG_TO_RAD,
                       g.y / GYRO_LSB * DEG_TO_RAD,
                       g.z / GYRO_LSB * DEG_TO_RAD);
}
VectorFloat accTilSI(VectorInt16 a) {           // -> m/s^2
    return VectorFloat(a.x / ACC_LSB * G_SI,
                       a.y / ACC_LSB * G_SI,
                       a.z / ACC_LSB * G_SI);
}

// Krydsprodukt a x b (bruges i projektionen)
VectorFloat kryds(VectorFloat a, VectorFloat b) {
    return VectorFloat(a.y * b.z - a.z * b.y,
                       a.z * b.x - a.x * b.z,
                       a.x * b.y - a.y * b.x);
}

// S/P-vinkel fra accelerometrene (uden theta0):  phi2 - phi1
// phi_i = atan2(f_y, f_z) er hvor meget IMU i hælder om sin egen x-akse.
// V3: nu en simpel forskel, fordi de to sensorer er monteret ens:
// theta er "hvor meget mere IMU2 hælder om aksen end IMU1".
//   Hele armen drejet stift:  phi1 = phi2  -> 0
//   IMU1 fladt (phi1 = 0), distal del drejet 30°: phi2 = 30° -> 30°
// (Før, med IMU1 vendt: -(phi1 + phi2).)
float thetaAccRaa(VectorFloat f1, VectorFloat f2) {
    float phi1 = atan2(f1.y, f1.z);
    float phi2 = atan2(f2.y, f2.z);
    return wrapPi(phi2 - phi1);   // V3: var -(phi1 + phi2)
}

// Projektion: accelerometermåling flyttet fra IMU'en ned til punktet P på aksen
//   f_P = f + alfa x r + omega x (omega x r),   r = (0, 0, -d)
// IMU'en kører rundt i en cirkel om aksen og mærker centripetal- og
// tangentialacceleration, som punktet på aksen ikke har. De to led fjerner dem.
VectorFloat kraftIPunkt(VectorFloat f, VectorFloat omega, VectorFloat alfa, float d) {
    VectorFloat r(0, 0, -d);
    VectorFloat tang = kryds(alfa, r);
    VectorFloat cent = kryds(omega, kryds(omega, r));
    return VectorFloat(f.x + tang.x + cent.x,
                       f.y + tang.y + cent.y,
                       f.z + tang.z + cent.z);
}

// Længde af vektor og af dens yz-del
float laengde(VectorFloat v)   { return sqrt(v.x * v.x + v.y * v.y + v.z * v.z); }
float yzLaengde(VectorFloat v) { return sqrt(v.y * v.y + v.z * v.z); }

// Første-ordens lavpasfilter: flytter den glatte værdi en del (a) hen mod
// den nye måling. a = dt / (RC + dt), RC = 1 / (2*pi*knækfrekvens)
VectorFloat lavpas(VectorFloat glat, VectorFloat ny, float dt) {
    float RC = 1.0 / (2.0 * PI * ALFA_LAVPAS_HZ);
    float a = dt / (RC + dt);
    return VectorFloat(glat.x + a * (ny.x - glat.x),
                       glat.y + a * (ny.y - glat.y),
                       glat.z + a * (ny.z - glat.z));
}

// Måler theta0: accelerometer-vinklen i 0-stillingen, som gennemsnit over
// THETA0_SAMPLES pakker. Gennemsnittet tages via sin/cos, fordi et
// almindeligt gennemsnit af +179° og -179° giver 0° i stedet for 180°.
float maalTheta0() {
    float sumSin = 0, sumCos = 0;
    int n = 0;
    while (n < THETA0_SAMPLES) {
        if (mpu.dmpGetCurrentFIFOPacket(fifoBuffer) && mpu2.dmpGetCurrentFIFOPacket(fifoBuffer2)) {
            mpu.dmpGetAccel(&aa1, fifoBuffer);
            mpu2.dmpGetAccel(&aa2, fifoBuffer2);
            float v = thetaAccRaa(accTilSI(aa1), accTilSI(aa2));
            sumSin += sin(v);
            sumCos += cos(v);
            n++;
        }
    }
    return atan2(sumSin, sumCos);
}


// ================================================================
// ===                      INITIAL SETUP                       ===
// ================================================================

void setup() {

    // join I2C bus (I2Cdev library doesn't do this automatically)
    #if I2CDEV_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
    
        Wire.begin(1,2);
        Wire.setClock(400000); // 400kHz I2C clock. Comment this line if having compilation difficulties
        Wire.setTimeout(25);
    #elif I2CDEV_IMPLEMENTATION == I2CDEV_BUILTIN_FASTWIRE
        Fastwire::setup(400, true);
    #endif


    // initialize serial communication
    // (115200 chosen because it is required for Teapot Demo output, but it's
    // really up to you depending on your project)
    Serial.begin(115200);

    // initialize device
    Serial.println(F("Initializing I2C devices..."));
    mpu.initialize();
    mpu2.initialize();

    // verify connection
    Serial.println(F("Testing device connections..."));
    Serial.println(mpu.testConnection() ? F("MPU6050 connection successful") : F("MPU6050 connection failed"));
    Serial.println(mpu2.testConnection() ? F("MPU6050 2 connection successful") : F("MPU6050 connection failed"));


    // load and configure the DMP
    Serial.println(F("Initializing DMP..."));
    devStatus2 = mpu2.dmpInitialize();
    devStatus = mpu.dmpInitialize();


    // supply your own gyro offsets here, scaled for min sensitivity
    mpu.setXGyroOffset(73);
    mpu.setYGyroOffset(-53);
    mpu.setZGyroOffset(8);
    mpu.setZAccelOffset(2585); // 1688 factory default for my test chip

    // supply your own gyro offsets here, scaled for min sensitivity
    mpu2.setXGyroOffset(70);
    mpu2.setYGyroOffset(19);
    mpu2.setZGyroOffset(19);
    mpu2.setZAccelOffset(4333); // 1688 factory default for my test chip

    // make sure it worked (returns 0 if so)
    // ÆNDRET: tjekker nu også devStatus2 (før blev IMU2's status ikke tjekket)
    if (devStatus == 0 && devStatus2 == 0) {
        // Calibration Time: generate offsets and calibrate our MPU6050
        // FJERNET: CalibrateAccel. Den får sensoren til at tro, den ligger
        // vandret i den stilling den har ved opstart, og "kalibrerer" dermed
        // den hældning væk, som vi bruger til at beregne theta.
        // Gyrokalibreringen beholdes: den fjerner gyroens bias (at den ikke
        // viser 0, selvom den ligger stille). Armen skal holdes stille.
        mpu.CalibrateGyro(6);
        mpu.PrintActiveOffsets();

        // Calibration Time: generate offsets and calibrate our MPU6050
        mpu2.CalibrateGyro(6);
        mpu2.PrintActiveOffsets();
        // turn on the DMP, now that it's ready
        Serial.println(F("Enabling DMP..."));
        mpu.setDMPEnabled(true);
        mpu2.setDMPEnabled(true);


        // set our DMP Ready flag so the main loop() function knows it's okay to use it
        Serial.println(F("DMP ready!"));
        dmpReady = true;

    } else {
        // ERROR!
        // 1 = initial memory load failed
        // 2 = DMP configuration updates failed
        // (if it's going to break, usually the code will be 1)
        Serial.print(F("DMP Initialization failed (code "));
        Serial.println(devStatus);
        Serial.print(F("DMP Initialization failed (code "));
        Serial.print(devStatus2);
        Serial.println(F(")"));
    }

    // configure LED for output
    pinMode(LED_PIN, OUTPUT);
    // OBS: måleområderne skal passe med GYRO_LSB og ACC_LSB øverst.
    // ±250 °/s kan blive for lidt til hurtig S/P. Ændres det til fx FS_500,
    // skal GYRO_LSB ændres til 65.5.
    mpu.setFullScaleGyroRange(MPU6050_GYRO_FS_250);
    mpu2.setFullScaleGyroRange(MPU6050_GYRO_FS_250);
    mpu.setFullScaleAccelRange(MPU6050_ACCEL_FS_2);
    mpu2.setFullScaleAccelRange(MPU6050_ACCEL_FS_2);

    // NY: mål theta0, så stillingen armen har nu, bliver theta = 0.
    // Ligger før Wi-Fi, så det sker mens armen stadig holdes stille efter
    // gyrokalibreringen.
    if (dmpReady) {
        theta0 = maalTheta0();
        Serial.print("theta0 [grader]: ");
        Serial.println(theta0 * RAD_TO_DEG);
        Serial.println("Klar");
    }

    // Connect to Wi-Fi
    Serial.printf("Connecting to %s", ssid);
    WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
        delay(50);
        Serial.print(".");
    }
    Serial.println(" connected!");

    // Get the time digitally from the NTP server
    configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);

    struct tm timeinfo;
    if (!getLocalTime(&timeinfo, 15000)) {  // wait up to 15 s
        Serial.println("Failed to obtain time from NTP!");
        return;
    }

    // Sync the ESP32 internal RTC with the epoch time received.
    // ESP32Time anchors its millisecond/microsecond counters to this moment.
    time_t now = time(nullptr);
    rtc.setTime(now);
    Serial.println("Time synced over NTP.");


    // Wi-Fi is no longer needed
    WiFi.disconnect(true);
    WiFi.mode(WIFI_OFF);
}


// i = x, j = y, k = z, r = w
// ÆNDRET: tager nu VectorFloat (SI-enheder) i stedet for VectorInt16 (rå).
// Selve formlen er uændret.
// Bemærk: funktionen roterer med den TRANSPONEREDE matrix af q. Derfor
// kaldes den med qRelInv, så resultatet bliver R12 * v (omregning fra
// IMU2's akser til IMU1's akser). Det er tjekket mod noterne.
void quaternion_rotate(Quaternion q, VectorFloat v) {
    float x11 = (1 - 2 * (q.y * q.y + q.z * q.z));
    float x12 = 2 * (q.x * q.y + q.z * q.w);
    float x13 = 2 * (q.x * q.z - q.y * q.w);

    float x21 = 2 * (q.x * q.y - q.z * q.w);
    float x22 = (1 - 2 * (q.x * q.x + q.z * q.z));
    float x23 = 2 * (q.y * q.z + q.x * q.w);

    float x31 = 2 * (q.x * q.z + q.y * q.w);
    float x32 = 2 * (q.y * q.z - q.x * q.w);
    float x33 = (1 - 2 * (q.x * q.x + q.y * q.y));

    vx_new = x11 * v.x + x12 * v.y + x13 * v.z;
    vy_new = x21 * v.x + x22 * v.y + x23 * v.z;
    vz_new = x31 * v.x + x32 * v.y + x33 * v.z;
}

// ================================================================
// ===                    MAIN PROGRAM LOOP                     ===
// ================================================================


void loop() {
    // if programming failed, don't try to do anything
    if (!dmpReady) return;
    // read a packet from FIFO
    if (mpu.dmpGetCurrentFIFOPacket(fifoBuffer) && mpu2.dmpGetCurrentFIFOPacket(fifoBuffer2)) { // Get the Latest packet


        // Beregner S/P-vinkel og relative størrelser (metode A)

            // ---------------------------------------------------------
            // ÆNDRET: DMP'ens quaternions (q, q2) bruges ikke længere.
            // q1^-1 * q2 forudsætter at begge DMP'er har samme globale
            // reference, og det har de ikke uden magnetometer.
            // Vi henter i stedet rå gyro og accelerometer fra pakkerne.
            // ---------------------------------------------------------
            mpu.dmpGetGyro(&gyro1, fifoBuffer);
            mpu2.dmpGetGyro(&gyro2, fifoBuffer2);
            mpu.dmpGetAccel(&aa1, fifoBuffer);
            mpu2.dmpGetAccel(&aa2, fifoBuffer2);

            // NY: tid siden forrige sample (dt) i sekunder.
            // micros() løber over efter ca. 71 min, men subtraktion med
            // unsigned long giver stadig det rigtige resultat.
            unsigned long nu_us = micros();
            float dt = (nu_us - forrigeTid_us) * 1e-6;
            forrigeTid_us = nu_us;

            // NY: omregn til SI (rad/s og m/s^2)
            VectorFloat w1 = gyroTilSI(gyro1);
            VectorFloat w2 = gyroTilSI(gyro2);
            VectorFloat f1 = accTilSI(aa1);
            VectorFloat f2 = accTilSI(aa2);

            // NY: første sample efter opstart. Der er ingen forrige værdier
            // at regne dt eller vinkelacceleration ud fra, så filtrene
            // startes bare i de nuværende værdier.
            if (foersteSample) {
                gyroGlat1 = w1;  forrigeGyroGlat1 = w1;
                gyroGlat2 = w2;  forrigeGyroGlat2 = w2;
                forrigeThetaDot = w2.x - w1.x;   // V3: var -(w1.x + w2.x)
                dt = 0;
                foersteSample = false;
            }

            // ---------------------------------------------------------
            // NY: TRIN 1 — projicér accelerometermålingerne ned på aksen
            // Vinkelaccelerationen (alfa) findes ved at glatte gyroen og se
            // hvor meget den har ændret sig siden sidst.
            // ---------------------------------------------------------
            VectorFloat alfa1(0, 0, 0), alfa2(0, 0, 0);
            if (dt > 0) {
                gyroGlat1 = lavpas(gyroGlat1, w1, dt);
                gyroGlat2 = lavpas(gyroGlat2, w2, dt);
                alfa1 = VectorFloat((gyroGlat1.x - forrigeGyroGlat1.x) / dt,
                                    (gyroGlat1.y - forrigeGyroGlat1.y) / dt,
                                    (gyroGlat1.z - forrigeGyroGlat1.z) / dt);
                alfa2 = VectorFloat((gyroGlat2.x - forrigeGyroGlat2.x) / dt,
                                    (gyroGlat2.y - forrigeGyroGlat2.y) / dt,
                                    (gyroGlat2.z - forrigeGyroGlat2.z) / dt);
                forrigeGyroGlat1 = gyroGlat1;
                forrigeGyroGlat2 = gyroGlat2;
            }
            VectorFloat fP1 = kraftIPunkt(f1, w1, alfa1, D1);
            VectorFloat fP2 = kraftIPunkt(f2, w2, alfa2, D2);

            // ---------------------------------------------------------
            // NY: TRIN 2 — theta fra accelerometrene (i punkterne P1, P2)
            // ---------------------------------------------------------
            float thetaAcc = wrapPi(thetaAccRaa(fP1, fP2) - theta0);

            // Må accelerometeret bruges i dette sample? (se INDSTILLINGER)
            bool accGyldig =
                fabs(laengde(fP1) - G_SI) < ACC_TOLERANCE &&
                fabs(laengde(fP2) - G_SI) < ACC_TOLERANCE &&
                yzLaengde(fP1) > RHO_MIN &&
                yzLaengde(fP2) > RHO_MIN;

            // ---------------------------------------------------------
            // NY: TRIN 3 — komplementærfilter
            //  a) forudsig med gyroen. theta_dot = w2.x - w1.x.
            //     V3: begge gyroer måler nu om samme retning (mod albuen).
            //     Drejer hele armen, måler de det samme -> 0.
            //     Ren S/P: IMU1 står stille -> theta_dot = IMU2's måling.
            //     Trapez: gennemsnit af hastigheden nu og sidst, ellers
            //     bliver vinklen et halvt sample "foran".
            //  b) ret en lille smule mod accelerometeret:
            //     K = tau/(tau+dt) er tæt på 1, så der rettes ca. 1 %
            //     af forskellen pr. sample ved 100 Hz og tau = 1 s.
            // ---------------------------------------------------------
            float thetaDot = w2.x - w1.x;   // V3: var -(w1.x + w2.x)
            float forudsagt = theta + 0.5 * (forrigeThetaDot + thetaDot) * dt;
            forrigeThetaDot = thetaDot;
            if (accGyldig && dt > 0) {
                float K = TAU / (TAU + dt);
                theta = forudsagt + (1 - K) * wrapPi(thetaAcc - forudsagt);
            } else {
                theta = forudsagt;
            }
            theta = wrapPi(theta);

            // ---------------------------------------------------------
            // ÆNDRET: qRel beregnes nu UD FRA theta i stedet for fra DMP.
            // V3: Modellen er nu bare rotation med theta om x (ingen 180°
            // monteringsforskel længere). En rotation med vinklen gamma om
            // en akse n skrives (w, x, y, z) = (cos(gamma/2), sin(gamma/2)*n).
            // Med n = x-aksen = (1, 0, 0):
            //   qRel = (cos(theta/2), sin(theta/2), 0, 0)
            // I neutral (theta = 0) er qRel = (1, 0, 0, 0): ingen rotation.
            // ---------------------------------------------------------
            Quaternion qRel(cos(theta / 2), sin(theta / 2), 0.0, 0.0);   // V3: var (0, 0, -sin, cos)

            // S/P-vinklen i grader til output
            float angleRel = theta * 180.0 / PI;


            // Relativ vinkelhastighed: IMU2's gyro omregnes til IMU1's akser
            // og IMU1's gyro trækkes fra. (Som før, nu i SI-enheder.)
            // Tjek af modellen: y og z bør være tæt på 0.
            Quaternion qRelInv(qRel.w, -qRel.x, -qRel.y, -qRel.z);
            quaternion_rotate(qRelInv, w2);
            velRel.x = vx_new - w1.x;
            velRel.y = vy_new - w1.y;
            velRel.z = vz_new - w1.z;

            // ÆNDRET: relativ acceleration mellem P2 og P1.
            // Før: dmpGetLinearAccel (tyngdekraft fjernet med hver DMP's egen
            // gravity-vektor) og ingen projektion.
            // Nu: de projicerede målinger fP1 og fP2 MED tyngdekraft. Når
            // begge er udtrykt i IMU1's akser og trukket fra hinanden, går
            // tyngdekraften ud af sig selv.
            // Ved ren S/P med albuen i ro bør resultatet være tæt på 0.
            quaternion_rotate(qRelInv, fP2);
            accRel.x = vx_new - fP1.x;
            accRel.y = vy_new - fP1.y;
            accRel.z = vz_new - fP1.z;


            // ÆNDRET: Serial.print med 5 decimaler (standard er kun 2).
            // velRel og accRel er allerede i SI, så /131 og /16384 er væk.
            // NY: angleRel (theta i grader) og accGyldig er tilføjet før tiden.
            Serial.print(qRel.x, 5);
            Serial.print(",");
            Serial.print(qRel.y, 5);
            Serial.print(",");
            Serial.print(qRel.z, 5);
            Serial.print(",");
            Serial.print(qRel.w, 5);
            Serial.print(",");
            Serial.print(velRel.x, 5);
            Serial.print(",");
            Serial.print(velRel.y, 5);
            Serial.print(",");
            Serial.print(velRel.z, 5);
            Serial.print(",");
            Serial.print(accRel.x, 5);
            Serial.print(",");
            Serial.print(accRel.y, 5);
            Serial.print(",");
            Serial.print(accRel.z, 5);
            Serial.print(",");
            Serial.print(angleRel, 3);
            Serial.print(",");
            Serial.print(accGyldig ? 1 : 0);
            Serial.print(",");


            Serial.printf("%lu.%06lu\n", rtc.getLocalEpoch(), rtc.getMicros());


        // blink LED to indicate activity
        blinkState = !blinkState;
        digitalWrite(LED_PIN, blinkState);
    }
}