#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to crospi_interfaces__srv__LuaCmd_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LuaCmd_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub cmd: std::string::String,

}



impl Default for LuaCmd_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::LuaCmd_Request::default())
  }
}

impl rosidl_runtime_rs::Message for LuaCmd_Request {
  type RmwMsg = super::srv::rmw::LuaCmd_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        cmd: msg.cmd.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        cmd: msg.cmd.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      cmd: msg.cmd.to_string(),
    }
  }
}


// Corresponds to crospi_interfaces__srv__LuaCmd_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LuaCmd_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: std::string::String,

}



impl Default for LuaCmd_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::LuaCmd_Response::default())
  }
}

impl rosidl_runtime_rs::Message for LuaCmd_Response {
  type RmwMsg = super::srv::rmw::LuaCmd_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: msg.response.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        response: msg.response.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      response: msg.response.to_string(),
    }
  }
}


// Corresponds to crospi_interfaces__srv__TaskSpecificationString_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskSpecificationString_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub str: std::string::String,

}



impl Default for TaskSpecificationString_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TaskSpecificationString_Request::default())
  }
}

impl rosidl_runtime_rs::Message for TaskSpecificationString_Request {
  type RmwMsg = super::srv::rmw::TaskSpecificationString_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        str: msg.str.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        str: msg.str.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      str: msg.str.to_string(),
    }
  }
}


// Corresponds to crospi_interfaces__srv__TaskSpecificationString_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskSpecificationString_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for TaskSpecificationString_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TaskSpecificationString_Response::default())
  }
}

impl rosidl_runtime_rs::Message for TaskSpecificationString_Response {
  type RmwMsg = super::srv::rmw::TaskSpecificationString_Response;

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


// Corresponds to crospi_interfaces__srv__TaskSpecificationFile_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskSpecificationFile_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub file_path: std::string::String,

}



impl Default for TaskSpecificationFile_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TaskSpecificationFile_Request::default())
  }
}

impl rosidl_runtime_rs::Message for TaskSpecificationFile_Request {
  type RmwMsg = super::srv::rmw::TaskSpecificationFile_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        file_path: msg.file_path.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        file_path: msg.file_path.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      file_path: msg.file_path.to_string(),
    }
  }
}


// Corresponds to crospi_interfaces__srv__TaskSpecificationFile_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskSpecificationFile_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for TaskSpecificationFile_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::TaskSpecificationFile_Response::default())
  }
}

impl rosidl_runtime_rs::Message for TaskSpecificationFile_Response {
  type RmwMsg = super::srv::rmw::TaskSpecificationFile_Response;

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






#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__crospi_interfaces__srv__LuaCmd() -> *const std::ffi::c_void;
}

// Corresponds to crospi_interfaces__srv__LuaCmd
#[allow(missing_docs, non_camel_case_types)]
pub struct LuaCmd;

impl rosidl_runtime_rs::Service for LuaCmd {
    type Request = LuaCmd_Request;
    type Response = LuaCmd_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__crospi_interfaces__srv__LuaCmd() }
    }
}




#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__crospi_interfaces__srv__TaskSpecificationString() -> *const std::ffi::c_void;
}

// Corresponds to crospi_interfaces__srv__TaskSpecificationString
#[allow(missing_docs, non_camel_case_types)]
pub struct TaskSpecificationString;

impl rosidl_runtime_rs::Service for TaskSpecificationString {
    type Request = TaskSpecificationString_Request;
    type Response = TaskSpecificationString_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__crospi_interfaces__srv__TaskSpecificationString() }
    }
}




#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__crospi_interfaces__srv__TaskSpecificationFile() -> *const std::ffi::c_void;
}

// Corresponds to crospi_interfaces__srv__TaskSpecificationFile
#[allow(missing_docs, non_camel_case_types)]
pub struct TaskSpecificationFile;

impl rosidl_runtime_rs::Service for TaskSpecificationFile {
    type Request = TaskSpecificationFile_Request;
    type Response = TaskSpecificationFile_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__crospi_interfaces__srv__TaskSpecificationFile() }
    }
}


