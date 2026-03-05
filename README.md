Project Overview
ACOUSTIX is a non-invasive embedded system designed to monitor chronic respiratory diseases (CRDs) such as Asthma and COPD. The project addresses the "Subjectivity Gap" in patient reporting by providing objective, real-time data on coughing frequency and intensity during sleep.

Core Innovation: Privacy-Preserving Inference
Unlike cloud-based solutions, this system utilizes Edge Computing. Audio signals are processed locally in 1-second windows and immediately deleted. No raw audio is ever stored or transmitted, ensuring total patient confidentiality and data security.

Technical Specifications

Microcontroller: ESP32 DevKit V1 featuring dual-core processing for simultaneous sampling and ML inference.


Audio Input: INMP441 MEMS Microphone with a 24-bit Digital I2S interface for high-fidelity, noise-free capture.


Local UI: 0.96" SSD1306 OLED via I2C for real-time cough count and system confidence.


Alert System: Active 5V Buzzer for local emergency alerts during high-intensity coughing episodes.


IoT Integration: Wi-Fi synchronization to a Blynk Cloud Dashboard for long-term trend analysis.

Hardware Pin Mapping
System Methodology

Acoustic Sampling: Ambient sound is sampled at 16,000 Hz via the I2S protocol.


Digital Processing: Real-Time Fast Fourier Transform (FFT) is performed on ESP32 Core 0.


Feature Extraction: Mel-Frequency Cepstral Coefficients (MFCC) convert audio into 2D Spectrograms.


TinyML Inference: A Quantized Convolutional Neural Network (CNN) classifies the signal as "Cough" or "Ambient Noise".

Future Scope

Clinical Differentiation: Training the model to distinguish between "Dry" and "Wet" coughs for diagnostic aid.


Environmental Correlation: Integrating a BME280 sensor to correlate coughing spikes with humidity and PM2.5 levels.


Energy Optimization: Implementing sound-triggered wake-up modes to extend battery life on small Li-Po cells.
