#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to candle_ros2__msg__ImpedanceCmd
/// Message holds impedance PD controller parameters for MD controllers

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ImpedanceCmd {
    /// Device IDs
    pub device_ids: Vec<u16>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kp: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd: Vec<f32>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_output: Vec<f32>,

}



impl Default for ImpedanceCmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ImpedanceCmd::default())
  }
}

impl rosidl_runtime_rs::Message for ImpedanceCmd {
  type RmwMsg = super::msg::rmw::ImpedanceCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_ids: msg.device_ids.as_slice().into(),
        kp: msg.kp.as_slice().into(),
        kd: msg.kd.as_slice().into(),
        max_output: msg.max_output.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_ids: msg.device_ids.as_slice().into(),
        kp: msg.kp.as_slice().into(),
        kd: msg.kd.as_slice().into(),
        max_output: msg.max_output.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      device_ids: msg.device_ids.into(),
      kp: msg.kp.into(),
      kd: msg.kd.into(),
      max_output: msg.max_output.into(),
    }
  }
}


// Corresponds to candle_ros2__msg__MotionCmd
/// Message holds motion targets for MD devices

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotionCmd {
    /// Device IDs
    pub device_ids: Vec<u32>,

    /// Target positions
    pub target_position: Vec<f32>,

    /// Target velocities
    pub target_velocity: Vec<f32>,

    /// Target torques
    pub target_torque: Vec<f32>,

}



impl Default for MotionCmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotionCmd::default())
  }
}

impl rosidl_runtime_rs::Message for MotionCmd {
  type RmwMsg = super::msg::rmw::MotionCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_ids: msg.device_ids.as_slice().into(),
        target_position: msg.target_position.as_slice().into(),
        target_velocity: msg.target_velocity.as_slice().into(),
        target_torque: msg.target_torque.as_slice().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_ids: msg.device_ids.as_slice().into(),
        target_position: msg.target_position.as_slice().into(),
        target_velocity: msg.target_velocity.as_slice().into(),
        target_torque: msg.target_torque.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      device_ids: msg.device_ids.into(),
      target_position: msg.target_position.into(),
      target_velocity: msg.target_velocity.into(),
      target_torque: msg.target_torque.into(),
    }
  }
}


// Corresponds to candle_ros2__msg__Pid
/// Message holds PID controller parameters

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Pid {

    // This member is not documented.
    #[allow(missing_docs)]
    pub kp: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ki: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kd: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub i_windup: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub max_output: f32,

}



impl Default for Pid {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Pid::default())
  }
}

impl rosidl_runtime_rs::Message for Pid {
  type RmwMsg = super::msg::rmw::Pid;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        kp: msg.kp,
        ki: msg.ki,
        kd: msg.kd,
        i_windup: msg.i_windup,
        max_output: msg.max_output,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      kp: msg.kp,
      ki: msg.ki,
      kd: msg.kd,
      i_windup: msg.i_windup,
      max_output: msg.max_output,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      kp: msg.kp,
      ki: msg.ki,
      kd: msg.kd,
      i_windup: msg.i_windup,
      max_output: msg.max_output,
    }
  }
}


// Corresponds to candle_ros2__msg__VelocityPidCmd
/// Message holds PID controller parameters for Velocity PID motion mode for MD controllers

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct VelocityPidCmd {
    /// Device IDs
    pub device_ids: Vec<u16>,

    /// Velocity PID parameters
    pub velocity_pid: Vec<super::msg::Pid>,

}



impl Default for VelocityPidCmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::VelocityPidCmd::default())
  }
}

impl rosidl_runtime_rs::Message for VelocityPidCmd {
  type RmwMsg = super::msg::rmw::VelocityPidCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_ids: msg.device_ids.as_slice().into(),
        velocity_pid: msg.velocity_pid
          .into_iter()
          .map(|elem| super::msg::Pid::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_ids: msg.device_ids.as_slice().into(),
        velocity_pid: msg.velocity_pid
          .iter()
          .map(|elem| super::msg::Pid::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      device_ids: msg.device_ids.into(),
      velocity_pid: msg.velocity_pid
          .into_iter()
          .map(super::msg::Pid::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to candle_ros2__msg__PositionPidCmd
/// Message holds PID controller parameters for Position PID motion mode for MD controllers

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PositionPidCmd {
    /// Device IDs
    pub device_ids: Vec<u16>,

    /// Position PID parameters
    pub position_pid: Vec<super::msg::Pid>,

    /// Velocity PID parameters
    pub velocity_pid: Vec<super::msg::Pid>,

}



impl Default for PositionPidCmd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PositionPidCmd::default())
  }
}

impl rosidl_runtime_rs::Message for PositionPidCmd {
  type RmwMsg = super::msg::rmw::PositionPidCmd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_ids: msg.device_ids.as_slice().into(),
        position_pid: msg.position_pid
          .into_iter()
          .map(|elem| super::msg::Pid::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        velocity_pid: msg.velocity_pid
          .into_iter()
          .map(|elem| super::msg::Pid::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        device_ids: msg.device_ids.as_slice().into(),
        position_pid: msg.position_pid
          .iter()
          .map(|elem| super::msg::Pid::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        velocity_pid: msg.velocity_pid
          .iter()
          .map(|elem| super::msg::Pid::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      device_ids: msg.device_ids.into(),
      position_pid: msg.position_pid
          .into_iter()
          .map(super::msg::Pid::from_rmw_message)
          .collect(),
      velocity_pid: msg.velocity_pid
          .into_iter()
          .map(super::msg::Pid::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to candle_ros2__msg__BrakeResistorData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BrakeResistorData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature_limit: f32,

}



impl Default for BrakeResistorData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BrakeResistorData::default())
  }
}

impl rosidl_runtime_rs::Message for BrakeResistorData {
  type RmwMsg = super::msg::rmw::BrakeResistorData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        enabled: msg.enabled,
        temperature: msg.temperature,
        temperature_limit: msg.temperature_limit,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      enabled: msg.enabled,
      temperature: msg.temperature,
      temperature_limit: msg.temperature_limit,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      enabled: msg.enabled,
      temperature: msg.temperature,
      temperature_limit: msg.temperature_limit,
    }
  }
}


// Corresponds to candle_ros2__msg__ControlModuleData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlModuleData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub bus_voltage: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_voltage_level_1: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_voltage_level_2: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brake_trigger_voltage: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature_limit: f32,

}



impl Default for ControlModuleData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ControlModuleData::default())
  }
}

impl rosidl_runtime_rs::Message for ControlModuleData {
  type RmwMsg = super::msg::rmw::ControlModuleData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        bus_voltage: msg.bus_voltage,
        battery_voltage_level_1: msg.battery_voltage_level_1,
        battery_voltage_level_2: msg.battery_voltage_level_2,
        brake_trigger_voltage: msg.brake_trigger_voltage,
        temperature: msg.temperature,
        temperature_limit: msg.temperature_limit,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      bus_voltage: msg.bus_voltage,
      battery_voltage_level_1: msg.battery_voltage_level_1,
      battery_voltage_level_2: msg.battery_voltage_level_2,
      brake_trigger_voltage: msg.brake_trigger_voltage,
      temperature: msg.temperature,
      temperature_limit: msg.temperature_limit,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      bus_voltage: msg.bus_voltage,
      battery_voltage_level_1: msg.battery_voltage_level_1,
      battery_voltage_level_2: msg.battery_voltage_level_2,
      brake_trigger_voltage: msg.brake_trigger_voltage,
      temperature: msg.temperature,
      temperature_limit: msg.temperature_limit,
    }
  }
}


// Corresponds to candle_ros2__msg__IsolatedConverterData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IsolatedConverterData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub output_voltage: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub load_current: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub power: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub energy: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ocd_level: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ocd_delay: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature_limit: f32,

}



impl Default for IsolatedConverterData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::IsolatedConverterData::default())
  }
}

impl rosidl_runtime_rs::Message for IsolatedConverterData {
  type RmwMsg = super::msg::rmw::IsolatedConverterData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        enabled: msg.enabled,
        output_voltage: msg.output_voltage,
        load_current: msg.load_current,
        power: msg.power,
        energy: msg.energy,
        ocd_level: msg.ocd_level,
        ocd_delay: msg.ocd_delay,
        temperature: msg.temperature,
        temperature_limit: msg.temperature_limit,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      enabled: msg.enabled,
      output_voltage: msg.output_voltage,
      load_current: msg.load_current,
      power: msg.power,
      energy: msg.energy,
      ocd_level: msg.ocd_level,
      ocd_delay: msg.ocd_delay,
      temperature: msg.temperature,
      temperature_limit: msg.temperature_limit,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      enabled: msg.enabled,
      output_voltage: msg.output_voltage,
      load_current: msg.load_current,
      power: msg.power,
      energy: msg.energy,
      ocd_level: msg.ocd_level,
      ocd_delay: msg.ocd_delay,
      temperature: msg.temperature,
      temperature_limit: msg.temperature_limit,
    }
  }
}


// Corresponds to candle_ros2__msg__PowerStageData

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PowerStageData {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub enabled: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub brake_resistor_socket: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub trigger_voltage: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub output_voltage: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub autostart: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub load_current: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub power: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub energy: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ocd_level: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ocd_delay: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperature_limit: f32,

}



impl Default for PowerStageData {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PowerStageData::default())
  }
}

impl rosidl_runtime_rs::Message for PowerStageData {
  type RmwMsg = super::msg::rmw::PowerStageData;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        enabled: msg.enabled,
        brake_resistor_socket: msg.brake_resistor_socket,
        trigger_voltage: msg.trigger_voltage,
        output_voltage: msg.output_voltage,
        autostart: msg.autostart,
        load_current: msg.load_current,
        power: msg.power,
        energy: msg.energy,
        ocd_level: msg.ocd_level,
        ocd_delay: msg.ocd_delay,
        temperature: msg.temperature,
        temperature_limit: msg.temperature_limit,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      enabled: msg.enabled,
      brake_resistor_socket: msg.brake_resistor_socket,
      trigger_voltage: msg.trigger_voltage,
      output_voltage: msg.output_voltage,
      autostart: msg.autostart,
      load_current: msg.load_current,
      power: msg.power,
      energy: msg.energy,
      ocd_level: msg.ocd_level,
      ocd_delay: msg.ocd_delay,
      temperature: msg.temperature,
      temperature_limit: msg.temperature_limit,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      enabled: msg.enabled,
      brake_resistor_socket: msg.brake_resistor_socket,
      trigger_voltage: msg.trigger_voltage,
      output_voltage: msg.output_voltage,
      autostart: msg.autostart,
      load_current: msg.load_current,
      power: msg.power,
      energy: msg.energy,
      ocd_level: msg.ocd_level,
      ocd_delay: msg.ocd_delay,
      temperature: msg.temperature,
      temperature_limit: msg.temperature_limit,
    }
  }
}


