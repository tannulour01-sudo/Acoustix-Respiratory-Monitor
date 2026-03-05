# Acoustix-Respiratory-Monitor

Project Overview
ACOUSTIX is a non-invasive embedded system designed to monitor chronic respiratory diseases like Asthma and COPD. It addresses the "Subjectivity Gap" in patient reporting by providing objective, real-time data on coughing frequency and intensity.

Core Innovation: Privacy-Preserving Inference
The system utilizes Edge Computing to ensure patient confidentiality. Audio signals are processed in 1-second windows and immediately deleted; no raw audio is ever stored or transmitted.

Technical Specifications

Microcontroller: ESP32 DevKit V1 (Dual-core for simultaneous sampling and ML inference).

Audio Input: INMP441 MEMS Microphone (24-bit Digital I2S interface).

Local UI: 0.96" SSD1306 OLED via I2C for real-time cough count and system status.

Alert System: Active 5V Buzzer for high-intensity coughing episodes.

IoT Integration: Wi-Fi sync to Blynk Cloud for long-term trend analysis.

Gemini said
Copy and paste the text below directly into your README.md editor. It is formatted to be professional and technical for your resume.

ACOUSTIX: Edge-AI Driven Smart Respiratory Health Monitor
Project Overview
ACOUSTIX is a non-invasive embedded system designed to monitor chronic respiratory diseases like Asthma and COPD. It addresses the "Subjectivity Gap" in patient reporting by providing objective, real-time data on coughing frequency and intensity.
+1

Core Innovation: Privacy-Preserving Inference
The system utilizes Edge Computing to ensure patient confidentiality. Audio signals are processed in 1-second windows and immediately deleted; no raw audio is ever stored or transmitted.
+1

Technical Specifications

Microcontroller: ESP32 DevKit V1 (Dual-core for simultaneous sampling and ML inference).
Audio Input: INMP441 MEMS Microphone (24-bit Digital I2S interface).
Local UI: 0.96" SSD1306 OLED via I2C for real-time cough count and system status.
Alert System: Active 5V Buzzer for high-intensity coughing episodes.
IoT Integration: Wi-Fi sync to Blynk Cloud for long-term trend analysis.


System Methodology

Acoustic Sampling: Digital microphone samples ambient sound at 16,000 Hz via I2S.
Digital Processing: ESP32 Core 0 performs Real-Time Fast Fourier Transform (FFT).
Feature Extraction: MFCC coefficients convert audio into 2D Spectrograms.
TinyML Inference: A Quantized CNN classifies the signal as "Cough" or "Ambient Noise".


Future Development

Clinical Differentiation: Training for "Dry" vs "Wet" cough classification.
Environmental Correlation: Integration of BME280 for humidity and PM2.5 tracking.
Power Optimization: Sound-triggered wake-up modes for extended battery life.
