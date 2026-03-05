

#ifndef AUDIO_CONFIG_H
#define AUDIO_CONFIG_H

// Digital I2S interface pins - matched to Technical Report Pin-Mapping
#define I2S_WS    15 
#define I2S_SD    32 
#define I2S_SCK   14 

// OLED and PWM Alarm Pins
#define OLED_SCL  22
#define OLED_SDA  21
#define BUZZER_PIN 13

// Sampling parameters for 1-second windows
#define SAMPLE_RATE     16000 // 16kHz for human respiratory range
#define BITS_PER_SAMPLE 32    // 24-bit data in 32-bit slot for INMP441
#define BLOCK_SIZE      1024  // FFT window size

#endif
