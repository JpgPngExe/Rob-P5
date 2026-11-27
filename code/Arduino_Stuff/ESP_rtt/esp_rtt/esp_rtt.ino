#include <Arduino.h>
#include <ESP32Time.h>
#include <WiFi.h>
#include "time.h"

ESP32Time rtc;

// WiFi credentials
const char *ssid = "TP-Link_2792";
const char *password = "46402516";

// NTP settings
const char *ntpServer = "pool.ntp.org";

const long gmtOffset_sec = 3600;
const int daylightOffset_sec = 0;

// --------------------------------------------------
// Get ESP32 time in nanoseconds
// --------------------------------------------------

uint64_t getEspTimeNs() {

    uint64_t seconds = rtc.getLocalEpoch();
    uint64_t microseconds = rtc.getMicros();

    return seconds * 1000000000ULL
         + microseconds * 1000ULL;
}

// --------------------------------------------------
// Handle incoming PING messages
// --------------------------------------------------

void handleClockSync() {

    static String inputBuffer = "";

    while (Serial.available()) {

        char c = Serial.read();

        if (c == '\n') {

            inputBuffer.trim();

            if (inputBuffer.startsWith("PING")) {

                int firstComma = inputBuffer.indexOf(',');
                int secondComma = inputBuffer.indexOf(',', firstComma + 1);

                if (firstComma > 0 && secondComma > 0) {

                    String id = inputBuffer.substring(
                        firstComma + 1,
                        secondComma
                    );

                    // ESP32 receive timestamp
                    uint64_t t2 = getEspTimeNs();

                    // ESP32 send timestamp
                    uint64_t t3 = getEspTimeNs();

                    // Send response
                    Serial.printf(
                        "PONG,%s,%llu,%llu\n",
                        id.c_str(),
                        (unsigned long long)t2,
                        (unsigned long long)t3
                    );
                }
            }

            inputBuffer = "";
        }
        else {
            inputBuffer += c;
        }
    }
}

// --------------------------------------------------
// Setup
// --------------------------------------------------

void setup() {

    Serial.begin(115200);

    delay(1000);

    Serial.println("Starting clock synchronization test");

    // Connect to WiFi
    Serial.printf("Connecting to %s", ssid);

    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {

        delay(50);
        Serial.print(".");
    }

    Serial.println(" connected!");

    // NTP synchronization
    configTime(
        gmtOffset_sec,
        daylightOffset_sec,
        ntpServer
    );

    struct tm timeinfo;

    if (!getLocalTime(&timeinfo, 15000)) {

        Serial.println("Failed to obtain time from NTP!");

        return;
    }

    struct timeval tv;

    gettimeofday(&tv, nullptr);
    
    Serial.println("Time synced over NTP.");

    // Print initial timestamp
    Serial.printf(
        "ESP32 time: %llu\n",
        (unsigned long long)getEspTimeNs()
    );

    // Disable WiFi
    WiFi.disconnect(true);
    WiFi.mode(WIFI_OFF);

    Serial.println("WiFi disabled.");
    Serial.println("CLOCK_SYNC_READY");
}

// --------------------------------------------------
// Main loop
// --------------------------------------------------

void loop() {

    handleClockSync();

}
