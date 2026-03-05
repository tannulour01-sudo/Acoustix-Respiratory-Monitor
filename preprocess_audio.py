import librosa
import numpy as np

def get_mfcc_features(file):
    # Stage 3: Feature Extraction (MFCC) [cite: 55]
    y, sr = librosa.load(file, sr=16000)
    mfccs = librosa.feature.mfcc(y=y, sr=sr, n_mfcc=13)
    return np.mean(mfccs.T, axis=0)
