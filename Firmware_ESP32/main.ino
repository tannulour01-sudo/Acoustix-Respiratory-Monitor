#include <Arduino.h>
#include <BlynkSimpleEsp32.h>
#include <Adafruit_SSD1306.h>
#include "audio_config.h"

Adafruit_SSD1306 display(128, 64, &Wire, -1);
int coughCount = 0;

void setup() {
    Serial.begin(115200);
    Serial.println("--- ACOUSTIX SYSTEM BOOTING ---");
    
    // Initialize OLED - Using I2C pins 21/22
    if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
        Serial.println("OLED init failed. Checking wiring...");
        for(;;); // Don't proceed if display is missing
    }
    
    pinMode(BUZZER_PIN, OUTPUT);
    digitalWrite(BUZZER_PIN, LOW); // Ensure silent on boot
    
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(WHITE);
    display.setCursor(0,10);
    display.println("ACOUSTIX v1.0");
    display.println("Status: Monitoring...");
    display.display();
}

void loop() {
    // Stage 1 & 2: Sample and Process FFT (Core 0 handles this)
    // Stage 4: Run TinyML Inference
    
    // Manual override/Simulation check for testing
    bool detected = false; 
    
    if(detected) {
        coughCount++;
        Serial.printf("Cough Event Detected! Count: %d\n", coughCount);
        
        // Local feedback per Objective #5
        digitalWrite(BUZZER_PIN, HIGH); 
        delay(200);
        digitalWrite(BUZZER_PIN, LOW);
        
        // Update IoT Dashboard
        Blynk.virtualWrite(V1, coughCount); 
    }
    
    delay(100); // Small delay to prevent watchdog triggers
}
