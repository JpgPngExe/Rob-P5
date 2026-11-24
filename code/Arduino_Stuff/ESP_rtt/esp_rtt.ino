#include <Arduino.h>
#include "esp_timer.h"

String inputBuffer = "";

void setup() {
    Serial.begin(115200);
    Serial.setTimeout(100);

    Serial.println("ESP32_READY");
}

void loop() {
    while (Serial.available()) {
        char c = Serial.read();

        if (c == '\n') {

            // Timestamp ved modtagelse af hele beskeden
            uint64_t t2 = esp_timer_get_time() * 1000ULL;

            inputBuffer.trim();

            if (inputBuffer.startsWith("PING")) {

                // Parse besked: PING,id,t1
                int firstComma = inputBuffer.indexOf(',');
                int secondComma = inputBuffer.indexOf(',', firstComma + 1);

                if (firstComma > 0 && secondComma > 0) {

                    String id = inputBuffer.substring(
                        firstComma + 1,
                        secondComma
                    );

                    // Timestamp lige inden afsendelse
                    uint64_t t3 = esp_timer_get_time() * 1000ULL;

                    // Send svar til ROS
                    Serial.printf(
                        "PONG,%s,%llu,%llu\n",
                        id.c_str(),
                        t2,
                        t3
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
