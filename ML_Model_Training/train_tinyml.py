import numpy as np
import librosa
import os


SAMPLE_RATE = 16000
N_MFCC = 13

def extract_features(file_path):
    """
    Extracts MFCC features for the 3-phase physiological 
    signature of a cough (Inspiration, Compression, Expulsion).
    """
    try:
        audio, sr = librosa.load(file_path, sr=SAMPLE_RATE)
        # Focus on 1-second windows as per report specs
        mfccs = librosa.feature.mfcc(y=audio, sr=sr, n_mfcc=N_MFCC)
        return np.mean(mfccs.T, axis=0)
    except Exception as e:
        print(f"Error processing {file_path}: {e}")
        return None

# Placeholder for the Quantization Logic
def convert_to_tflite(model):
    # Aiming for 90% target accuracy on edge hardware
    print("Converting model to TFLite Quantized format...")
    pass

if __name__ == "__main__":
    print("ACOUSTIX Feature Extraction Pipeline Initialized.")
