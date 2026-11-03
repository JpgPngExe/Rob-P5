import matplotlib.pyplot as plt
import numpy as np
from scipy.fft import rfft, rfftfreq
from scipy import signal

def import_data(path):
    #rf"emg+data+for+gestures\EMG_data_for_gestures-master\01\1_raw_data_13-12_22.03.16.txt"
    # df = pd.read_csv(path, sep=",")
    # time = df["time"].to_numpy() #ms
    # dt = np.diff(time)
    # fs = 1000/dt.mean()
    # # print(dt.min())
    # # print(dt.max())
    # # print(dt.mean())
    # emg = df["channel1"].to_numpy() #mV
    data = np.loadtxt(path, delimiter=",")
  
    emg = data[3000:7000, 0]
    #convert to microvolts based on manual
    emg = emg * 0.045
    fs = 500 # hz
    time = np.arange(len(emg)) / fs
    return time, emg, fs

def fake_emg(mu,std,time):
    emg = np.random.normal(mu, std, time)
    return emg

def plot(x: np.ndarray, title: str, xlabel: str, ylabel: str, label: str | None=None,y: np.ndarray | None=None, stem: bool | None=False):
    plt.figure(figsize=(10, 6))
    if y is None:
        if stem is False:
            plt.plot(x, label=label)
        else:
            plt.stem(x, label=label, markerfmt='')
    else:
        if stem is False:
            plt.plot(x,y, label=label)
        else:
            plt.stem(x,y, label=label, markerfmt='')
    plt.title(title, fontsize=18)
    plt.xlabel(xlabel, fontsize=14)
    plt.ylabel(ylabel, fontsize=14)
    plt.xticks(fontsize=12)
    plt.yticks(fontsize=12)
    plt.grid(True)
    plt.tight_layout()
    if label is not None:
        plt.legend()

def main():
    time, emg, fs = import_data(rf"plots\data copy.txt")
    plot(x=time,title="Raw EMG Signal", xlabel="Time [s]", ylabel="Amplitude [µV]", y=emg)
    freq = 2 * np.abs(rfft(emg)) / len(emg)
    f = rfftfreq(len(emg),1/fs)
    plot(x=f,y=freq,title="FFT of Raw EMG Signal", xlabel="Frequency [Hz]", ylabel="Amplitude",stem=True)
    Q = 30.0
    freq_notch = [50,100]
    b50, a50 = signal.iirnotch(freq_notch[0], Q, fs)
    b100, a100 = signal.iirnotch(freq_notch[1], Q, fs)

    freq, h = signal.freqz(b50, a50, fs=fs)
    fig, ax = plt.subplots(2, 1, figsize=(10, 6))
    ax[0].plot(freq, 20*np.log10(abs(h)), color='blue')
    ax[0].set_title("Frequency Response", fontsize=18)
    ax[0].set_ylabel("Amplitude [dB]", color='blue', fontsize=14)
    ax[0].set_xlim([0, 100])
    ax[0].set_ylim([-25, 10])
    ax[0].grid(True)
    ax[0].tick_params(axis='both', labelsize=12)
    ax[1].plot(freq, np.unwrap(np.angle(h))*180/np.pi, color='green')
    ax[1].set_ylabel("Phase [deg]", color='green', fontsize=14)
    ax[1].set_xlabel("Frequency [Hz]", fontsize=14)
    ax[1].set_xlim([0, 100])
    ax[1].set_yticks([-90, -60, -30, 0, 30, 60, 90])
    ax[1].set_ylim([-90, 90])
    ax[1].tick_params(axis='both', labelsize=12)
    ax[1].grid(True)
    fig.tight_layout()

    notch_filtered = signal.filtfilt(b=b50,a=a50,x=emg)
    notch_filtered = signal.filtfilt(b=b100,a=a100,x=notch_filtered)
    
    plot(x=time,title="Notch Filtered EMG Signal", xlabel="Time [s]", ylabel="Amplitude [µV]", y=notch_filtered)
    freq = 2*np.abs(rfft(notch_filtered))/len(notch_filtered)
    f = rfftfreq(len(notch_filtered),1/fs)
    plot(x=f,y=freq,title="FFT of Notch Filtered EMG Signal", xlabel="Frequency [Hz]", ylabel="Amplitude", label="Signal", stem=True)
    
    filter_order = 4
    cut_off_frequencies = [20, 150]
    b, a = signal.butter(filter_order,cut_off_frequencies,btype="bp", fs=fs)
    w,h = signal.freqz(b,a, fs=fs)
    plt.figure(figsize=(10, 6))
    plt.semilogx(w, 20 * np.log10(abs(h)))
    plt.title('Butterworth Filter Frequency Response', fontsize=18)
    plt.xlabel('Frequency [Hz]', fontsize=14)
    plt.ylabel('Amplitude [dB]', fontsize=14)
    plt.margins(0, 0.1)
    plt.xticks(fontsize=12)
    plt.yticks(fontsize=12)
    plt.grid(which='both', axis='both')
    plt.axvline(cut_off_frequencies[0], color='green') # cutoff frequency
    plt.axvline(cut_off_frequencies[1], color='green') # cutoff frequency
    plt.tight_layout()
    filtered = signal.filtfilt(b=b,a=a,x=notch_filtered)
    plot(x=time,title="Filtered EMG Signal", xlabel="Time [s]", ylabel="Amplitude [µV]", y=filtered)
    freq = 2*np.abs(rfft(filtered))/len(filtered)
    f = rfftfreq(len(filtered),1/fs)
    plot(x=f,y=freq,title="FFT of Filtered EMG Signal", xlabel="Frequency [Hz]", ylabel="Amplitude", label="Signal", stem=True)
    
    rectified = np.abs(filtered)
    plot(x=time,title="Rectified Filtered EMG Signal", xlabel="Time [s]", ylabel="Amplitude [µV]", y=rectified)

if __name__ =="__main__":
    main()
    plt.show()