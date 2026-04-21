#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to trossen_widowx_interfaces__srv__ArmMode_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArmMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub arm_mode: std::string::String,

}



impl Default for ArmMode_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ArmMode_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ArmMode_Request {
  type RmwMsg = super::srv::rmw::ArmMode_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        arm_mode: msg.arm_mode.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        arm_mode: msg.arm_mode.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      arm_mode: msg.arm_mode.to_string(),
    }
  }
}


// Corresponds to trossen_widowx_interfaces__srv__ArmMode_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArmMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for ArmMode_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ArmMode_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ArmMode_Response {
  type RmwMsg = super::srv::rmw::ArmMode_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to trossen_widowx_interfaces__srv__JointModes_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointModes_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_mode: Vec<i32>,

}



impl Default for JointModes_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::JointModes_Request::default())
  }
}

impl rosidl_runtime_rs::Message for JointModes_Request {
  type RmwMsg = super::srv::rmw::JointModes_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joint_mode: msg.joint_mode.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        joint_mode: msg.joint_mode.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      joint_mode: msg.joint_mode
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to trossen_widowx_interfaces__srv__JointModes_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointModes_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for JointModes_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::JointModes_Response::default())
  }
}

impl rosidl_runtime_rs::Message for JointModes_Response {
  type RmwMsg = super::srv::rmw::JointModes_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}


// Corresponds to trossen_widowx_interfaces__srv__ControlGripper_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlGripper_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub position: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub time: f64,

}



impl Default for ControlGripper_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ControlGripper_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ControlGripper_Request {
  type RmwMsg = super::srv::rmw::ControlGripper_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: msg.position,
        time: msg.time,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      position: msg.position,
      time: msg.time,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      position: msg.position,
      time: msg.time,
    }
  }
}


// Corresponds to trossen_widowx_interfaces__srv__ControlGripper_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlGripper_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for ControlGripper_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ControlGripper_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ControlGripper_Response {
  type RmwMsg = super::srv::rmw::ControlGripper_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
    }
  }
}






#[link(name = "trossen_widowx_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__trossen_widowx_interfaces__srv__ArmMode() -> *const std::ffi::c_void;
}

// Corresponds to trossen_widowx_interfaces__srv__ArmMode
#[allow(missing_docs, non_camel_case_types)]
pub struct ArmMode;

impl rosidl_runtime_rs::Service for ArmMode {
    type Request = ArmMode_Request;
    type Response = ArmMode_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__trossen_widowx_interfaces__srv__ArmMode() }
    }
}




#[link(name = "trossen_widowx_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__trossen_widowx_interfaces__srv__JointModes() -> *const std::ffi::c_void;
}

// Corresponds to trossen_widowx_interfaces__srv__JointModes
#[allow(missing_docs, non_camel_case_types)]
pub struct JointModes;

impl rosidl_runtime_rs::Service for JointModes {
    type Request = JointModes_Request;
    type Response = JointModes_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__trossen_widowx_interfaces__srv__JointModes() }
    }
}




#[link(name = "trossen_widowx_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__trossen_widowx_interfaces__srv__ControlGripper() -> *const std::ffi::c_void;
}

// Corresponds to trossen_widowx_interfaces__srv__ControlGripper
#[allow(missing_docs, non_camel_case_types)]
pub struct ControlGripper;

impl rosidl_runtime_rs::Service for ControlGripper {
    type Request = ControlGripper_Request;
    type Response = ControlGripper_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__trossen_widowx_interfaces__srv__ControlGripper() }
    }
}


