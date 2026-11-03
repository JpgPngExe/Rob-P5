import numpy as np



def feature_extraction(window):
    features = np.zeros((window.shape[0], 4))
    for idx, channel in enumerate(window):
        mav = np.mean(np.abs(channel)) #Mean absolute value
        #Wilson Amplitude
        threshold_wilson = 1 #temporary
        wamp = 0
        for i in range(len(channel) -1):
            if (np.abs(channel[i] - channel[i+1])) > threshold_wilson:
                wamp +=1

        ssc = 0
        # Slope sign change
        threshold_ssc = 1 #temporary
        for i in range(1, len(channel) - 1):
            if ((channel[i] - channel[i-1]) * (channel[i] - channel[i+1])) >= threshold_ssc:
                ssc +=1

        #wavefrom length
        wl = np.sum(np.abs(np.diff(channel)))

        features[idx] = [mav, wamp, ssc, wl]

    return features