import numpy as np
import matplotlib.pyplot as plt

class controller:
    def __init__(self):
        self.fs = 500
        self.I = 0.0
        self.e = 0.0
        self.e_prev = 0.0
        self.Ts = 1 / self.fs
        self.kp = 15.0
        self.ki = 0.0
        self.kd = 0.001
        self.measured = 0.0
        self.reference = 0.0
        self.deadband = 0.001
        self.N = 50.0
        self.D_prev = 0.0

        self.M_start = 1.0
        self.M = self.M_start
        self.D = 1.0
        self.K = 1.0
        self.theta = 0.0
        self.theta_prev = 0.0
        self.theta_last = 0.0

        self.adm_decimation = 10
        self.settling_time = 0.1
        self.adm_rom = [np.deg2rad(-71), np.deg2rad(51.4)]
        #self.adm_rom = [np.deg2rad(-1000), np.deg2rad(1000)]
        self.base_K = 1.0
        self.max_k = 15.0
        self.buffer = np.deg2rad(10)
        self.Ts_adm = self.Ts * self.adm_decimation
        self.J_est = 0.0
        self.J_gain = 0.0
       
    def compute_error(self):
        self.e = self.reference - self.measured
        if abs(self.e) < self.deadband:
            self.e = 0

    def pid_control(self):
        self.compute_error()
        P = self.kp * self.e
        self.I = self.ki * self.e * self.Ts + self.I
        self.I = np.clip(self.I, -5, 5)
        D = ((self.N * self.kd * (self.e - self.e_prev) + self.D_prev) / (1 + self.N * self.Ts) )
        self.D_prev = D
        self.e_prev = self.e
        u = P + self.I + D
        u = np.clip(u,-50,50)
        return u

    def adjust_Kd(self, tau_current,B, dq, ddq):
        if abs(ddq) < 1e-4:
            return
        self.J_est = (tau_current - B * dq) / ddq 
        # alpha = 0.01q
        # self.M += alpha * 0.5*(J_est-self.M)
        #self.M = self.M_start + self.J_gain*self.J_est
        #self.M = np.clip(self.M, 0.1, 100)
        self.kd = (
                        2*np.sqrt(self.J_est*self.kp) - B
                        )
        self.update_admittance_parameter()

    def update_admittance_parameter(self):
        dist_lower = self.theta - self.adm_rom[0]
        dist_upper = self.adm_rom[1] - self.theta 
        if dist_lower < self.buffer:
            x = 1.0 - max(dist_lower, 0.0) / self.buffer
            factor = 0.5 * (1.0 - np.cos(x * np.pi))
            self.K = self.base_K + (self.max_k - self.base_K) * factor

        elif dist_upper < self.buffer:
            x = 1.0 - max(dist_upper, 0.0) / self.buffer
            factor = 0.5 * (1.0 - np.cos(x * np.pi))
            self.K = self.base_K + (self.max_k - self.base_K) * factor
        else:
            self.K = self.base_K
        if self.K > 0:
            self.D = 2*np.sqrt(self.M * self.K)
        else:
            self.D = self.M / self.settling_time
    
    def admittance_control(self,tau):
        self.theta_last = self.theta_prev
        self.theta_prev = self.theta
        self.theta = (tau * self.Ts_adm**2 + self.theta_prev * (2 * self.M + self.D * self.Ts_adm) - self.M * self.theta_last) / (self.M + self.D * self.Ts_adm + self.K * self.Ts_adm**2)
        self.theta = np.clip(self.theta, self.adm_rom[0], self.adm_rom[1])
        return self.theta

class system:
    def __init__(self, Ts):
        self.J = 0.1
        self.B = 0.2
        self.theta = 0.0
        self.dtheta = 0.0
        self.ddtheta = 0.0
        self.Ts = Ts
        self.rom = [np.deg2rad(-71), np.deg2rad(51.4)]
        #self.rom = [np.deg2rad(-1000), np.deg2rad(1000)]

    def plant(self,u):
        self.ddtheta = (u - self.B*self.dtheta) / self.J
        self.dtheta += self.ddtheta * self.Ts
        self.theta += self.dtheta*self.Ts
        noise = np.random.normal(0,0.001)
        self.theta = np.clip(self.theta + noise, self.rom[0], self.rom[1])
        return self.theta
        

if __name__ == "__main__":
    
    angle = []
    uhist = []
    refhist = []
    Mhist = []
    Dhist = []
    Khist = []
    error = []
    Jhist = []
    counter = 0
    ref_old = 0.0
    ref_new = 0.0
    M = 1
    inertia = [0.1, 0.5, 1, 2, 5, 10]
    for j in inertia:
        u = 0.0
        pid = controller()
        pid.J_gain = 0.3
        Ts = pid.Ts
        duration = 20
        num_steps = int(pid.fs * duration)
        time = np.linspace(0, duration, num_steps)
        plant = system(Ts=Ts)
        plant.J = j
        pid.adm_decimation = 10
        pid.M_start = pid.M = M
        angle =     []
        uhist =     []
        refhist =   []
        Mhist =     []
        Dhist =     []
        Khist =     []
        error =     []
        Jhist =     []
        tauhist =   []
        counter = 0
        pid.adm_decimation = 10
        ref_old = 0.0
        ref_new = 0.0
        for t in time:
            tau = 0
            if 2 < t < 3:
                tau = 5
            elif 3 <= t < 5:
                tau = 0 
            elif 10 <= t:
                tau = -3
                               
            pid.measured = plant.theta
            if counter % pid.adm_decimation == 0:
                pid.adjust_Kd(u, plant.B, plant.dtheta, plant.ddtheta)
                ref_old = ref_new
                ref_new = pid.admittance_control(tau)
                pid.update_admittance_parameter()
            fraction = (counter % pid.adm_decimation) / pid.adm_decimation
            pid.reference = ref_old + (ref_new - ref_old) * fraction
            counter += 1
            u = pid.pid_control()
            y = plant.plant(u)
            
            
            angle.append(y)
            uhist.append(u)
            refhist.append(pid.reference)
            Mhist.append(pid.M)
            Dhist.append(pid.D)
            Khist.append(pid.K)
            error.append(pid.reference - y)
            Jhist.append(pid.J_est)
            tauhist.append(tau)
        
        error_tot = np.array(refhist) - np.array(angle)
        rmse = np.sqrt(np.mean(error_tot**2))
        nrmse = rmse / np.max(np.abs(refhist)) * 100
        vel_ref = np.diff(refhist)/Ts
        rms_vel = np.sqrt(np.mean(vel_ref**2))
        peak_vel = np.max(np.abs(vel_ref))
        print(max(angle))
        print(min(angle))
        print(f"error = {nrmse}%")
        print(f"J={plant.J:.2f}")
        print(f"M={pid.M:.2f}")
        print(f"RMS vel={rms_vel:.2f} rad/s")
        print(f"Peak vel={peak_vel:.2f} rad/s")
        print(f"kd = {pid.kd}")

        fig, ax = plt.subplots(1,2, figsize =(14,5))
        fig.suptitle(f"J = {plant.J:.2f}, Kd = {pid.kd:.2f}, nrmse = {nrmse:.2f}%")
        ax[0].axhline(pid.adm_rom[0], color="black", linestyle="--")
        ax[0].axhline(pid.adm_rom[1], color="black", linestyle="--")
        ax[0].plot(time, refhist, color="r", label="Reference angle")
        ax[0].plot(time, tauhist, color="b", label="Input Torque")
        ax[0].plot(time, angle, color="g", label="Measured angle")
        # ax[0].plot(time, uhist, color="b", label="Motor command")
        ax[0].set_xlabel("Time [s]")
        ax[0].set_ylabel("Angle [rad]")
        ax[0].set_ylim(-1.3, 1.0)
        ax[0].grid(True)
        ax[0].legend()

        ax[1].plot(time, Dhist, color="g", label="D")
        ax[1].plot(time, Khist, color="b", label="K")
        ax[1].set_xlabel("Time [s]")
        ax[1].set_ylabel("Parameter value")
        ax[1].grid(True)
        ax[1].legend()
        # fig, ax = plt.subplots(1, 2, figsize=(14, 5))

        # fig.suptitle(
        #     f"M = {pid.M:.2f}, J = {plant.J:.2f},Gain = {pid.J_gain:.3f} , NRMSE = {nrmse:.2f}%"
        # )

        # # Første subplot: Vinkel
        # ax[0].axhline(pid.adm_rom[0], color="black", linestyle="--")
        # ax[0].axhline(pid.adm_rom[1], color="black", linestyle="--")

        # ax[0].plot(time, angle, color="b", label="Measured angle")
        # ax[0].plot(time, refhist, color="r", label="Reference angle")
        # # ax[0].plot(time, uhist, color="g", label="motor signal")

        # ax[0].set_xlabel("Time [s]")
        # ax[0].set_ylabel("Angle [rad]")
        # ax[0].set_ylim(-1.3, 1.0)
        # ax[0].grid(True)
        # ax[0].legend()

        # # Andet subplot: Admittance-parametre
        # ax[1].plot(time, Mhist, color="r", label="M")
        # ax[1].plot(time, Dhist, color="g", label="D")
        # ax[1].plot(time, Khist, color="b", label="K")
        # ax[1].plot(time, Jhist, color="y", label="J")

        # ax[1].set_xlabel("Time [s]")
        # ax[1].set_ylabel("Parameter value")
        # ax[1].grid(True)
        # ax[1].legend()


    #plt.figure()
    # plt.plot(time,error, color="y", label="error")
    # plt.figure()
    # plt.plot(time,Jhist, color="y", label="J")

    plt.tight_layout()
    plt.show()