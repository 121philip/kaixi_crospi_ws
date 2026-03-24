#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__srv__LuaCmd_Request() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__srv__LuaCmd_Request__init(msg: *mut LuaCmd_Request) -> bool;
    fn crospi_interfaces__srv__LuaCmd_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LuaCmd_Request>, size: usize) -> bool;
    fn crospi_interfaces__srv__LuaCmd_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LuaCmd_Request>);
    fn crospi_interfaces__srv__LuaCmd_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LuaCmd_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<LuaCmd_Request>) -> bool;
}

// Corresponds to crospi_interfaces__srv__LuaCmd_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LuaCmd_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub cmd: rosidl_runtime_rs::String,

}



impl Default for LuaCmd_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__srv__LuaCmd_Request__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__srv__LuaCmd_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LuaCmd_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__srv__LuaCmd_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__srv__LuaCmd_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__srv__LuaCmd_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LuaCmd_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LuaCmd_Request where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/srv/LuaCmd_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__srv__LuaCmd_Request() }
  }
}


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__srv__LuaCmd_Response() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__srv__LuaCmd_Response__init(msg: *mut LuaCmd_Response) -> bool;
    fn crospi_interfaces__srv__LuaCmd_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LuaCmd_Response>, size: usize) -> bool;
    fn crospi_interfaces__srv__LuaCmd_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LuaCmd_Response>);
    fn crospi_interfaces__srv__LuaCmd_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LuaCmd_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<LuaCmd_Response>) -> bool;
}

// Corresponds to crospi_interfaces__srv__LuaCmd_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LuaCmd_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub response: rosidl_runtime_rs::String,

}



impl Default for LuaCmd_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__srv__LuaCmd_Response__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__srv__LuaCmd_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LuaCmd_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__srv__LuaCmd_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__srv__LuaCmd_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__srv__LuaCmd_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LuaCmd_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LuaCmd_Response where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/srv/LuaCmd_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__srv__LuaCmd_Response() }
  }
}


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__srv__TaskSpecificationString_Request() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__srv__TaskSpecificationString_Request__init(msg: *mut TaskSpecificationString_Request) -> bool;
    fn crospi_interfaces__srv__TaskSpecificationString_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskSpecificationString_Request>, size: usize) -> bool;
    fn crospi_interfaces__srv__TaskSpecificationString_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskSpecificationString_Request>);
    fn crospi_interfaces__srv__TaskSpecificationString_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskSpecificationString_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskSpecificationString_Request>) -> bool;
}

// Corresponds to crospi_interfaces__srv__TaskSpecificationString_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskSpecificationString_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub str: rosidl_runtime_rs::String,

}



impl Default for TaskSpecificationString_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__srv__TaskSpecificationString_Request__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__srv__TaskSpecificationString_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskSpecificationString_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__srv__TaskSpecificationString_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__srv__TaskSpecificationString_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__srv__TaskSpecificationString_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskSpecificationString_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskSpecificationString_Request where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/srv/TaskSpecificationString_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__srv__TaskSpecificationString_Request() }
  }
}


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__srv__TaskSpecificationString_Response() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__srv__TaskSpecificationString_Response__init(msg: *mut TaskSpecificationString_Response) -> bool;
    fn crospi_interfaces__srv__TaskSpecificationString_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskSpecificationString_Response>, size: usize) -> bool;
    fn crospi_interfaces__srv__TaskSpecificationString_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskSpecificationString_Response>);
    fn crospi_interfaces__srv__TaskSpecificationString_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskSpecificationString_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskSpecificationString_Response>) -> bool;
}

// Corresponds to crospi_interfaces__srv__TaskSpecificationString_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskSpecificationString_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for TaskSpecificationString_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__srv__TaskSpecificationString_Response__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__srv__TaskSpecificationString_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskSpecificationString_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__srv__TaskSpecificationString_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__srv__TaskSpecificationString_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__srv__TaskSpecificationString_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskSpecificationString_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskSpecificationString_Response where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/srv/TaskSpecificationString_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__srv__TaskSpecificationString_Response() }
  }
}


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__srv__TaskSpecificationFile_Request() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__srv__TaskSpecificationFile_Request__init(msg: *mut TaskSpecificationFile_Request) -> bool;
    fn crospi_interfaces__srv__TaskSpecificationFile_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskSpecificationFile_Request>, size: usize) -> bool;
    fn crospi_interfaces__srv__TaskSpecificationFile_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskSpecificationFile_Request>);
    fn crospi_interfaces__srv__TaskSpecificationFile_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskSpecificationFile_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskSpecificationFile_Request>) -> bool;
}

// Corresponds to crospi_interfaces__srv__TaskSpecificationFile_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskSpecificationFile_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub file_path: rosidl_runtime_rs::String,

}



impl Default for TaskSpecificationFile_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__srv__TaskSpecificationFile_Request__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__srv__TaskSpecificationFile_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskSpecificationFile_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__srv__TaskSpecificationFile_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__srv__TaskSpecificationFile_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__srv__TaskSpecificationFile_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskSpecificationFile_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskSpecificationFile_Request where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/srv/TaskSpecificationFile_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__srv__TaskSpecificationFile_Request() }
  }
}


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__srv__TaskSpecificationFile_Response() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__srv__TaskSpecificationFile_Response__init(msg: *mut TaskSpecificationFile_Response) -> bool;
    fn crospi_interfaces__srv__TaskSpecificationFile_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskSpecificationFile_Response>, size: usize) -> bool;
    fn crospi_interfaces__srv__TaskSpecificationFile_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskSpecificationFile_Response>);
    fn crospi_interfaces__srv__TaskSpecificationFile_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskSpecificationFile_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskSpecificationFile_Response>) -> bool;
}

// Corresponds to crospi_interfaces__srv__TaskSpecificationFile_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskSpecificationFile_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for TaskSpecificationFile_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__srv__TaskSpecificationFile_Response__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__srv__TaskSpecificationFile_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskSpecificationFile_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__srv__TaskSpecificationFile_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__srv__TaskSpecificationFile_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__srv__TaskSpecificationFile_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskSpecificationFile_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskSpecificationFile_Response where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/srv/TaskSpecificationFile_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__srv__TaskSpecificationFile_Response() }
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


