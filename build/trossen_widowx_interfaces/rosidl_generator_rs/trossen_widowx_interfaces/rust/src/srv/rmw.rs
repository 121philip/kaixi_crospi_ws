#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "trossen_widowx_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__trossen_widowx_interfaces__srv__ArmMode_Request() -> *const std::ffi::c_void;
}

#[link(name = "trossen_widowx_interfaces__rosidl_generator_c")]
extern "C" {
    fn trossen_widowx_interfaces__srv__ArmMode_Request__init(msg: *mut ArmMode_Request) -> bool;
    fn trossen_widowx_interfaces__srv__ArmMode_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArmMode_Request>, size: usize) -> bool;
    fn trossen_widowx_interfaces__srv__ArmMode_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArmMode_Request>);
    fn trossen_widowx_interfaces__srv__ArmMode_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArmMode_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ArmMode_Request>) -> bool;
}

// Corresponds to trossen_widowx_interfaces__srv__ArmMode_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArmMode_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub arm_mode: rosidl_runtime_rs::String,

}



impl Default for ArmMode_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !trossen_widowx_interfaces__srv__ArmMode_Request__init(&mut msg as *mut _) {
        panic!("Call to trossen_widowx_interfaces__srv__ArmMode_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArmMode_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trossen_widowx_interfaces__srv__ArmMode_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trossen_widowx_interfaces__srv__ArmMode_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trossen_widowx_interfaces__srv__ArmMode_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArmMode_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArmMode_Request where Self: Sized {
  const TYPE_NAME: &'static str = "trossen_widowx_interfaces/srv/ArmMode_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__trossen_widowx_interfaces__srv__ArmMode_Request() }
  }
}


#[link(name = "trossen_widowx_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__trossen_widowx_interfaces__srv__ArmMode_Response() -> *const std::ffi::c_void;
}

#[link(name = "trossen_widowx_interfaces__rosidl_generator_c")]
extern "C" {
    fn trossen_widowx_interfaces__srv__ArmMode_Response__init(msg: *mut ArmMode_Response) -> bool;
    fn trossen_widowx_interfaces__srv__ArmMode_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArmMode_Response>, size: usize) -> bool;
    fn trossen_widowx_interfaces__srv__ArmMode_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArmMode_Response>);
    fn trossen_widowx_interfaces__srv__ArmMode_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArmMode_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ArmMode_Response>) -> bool;
}

// Corresponds to trossen_widowx_interfaces__srv__ArmMode_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArmMode_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for ArmMode_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !trossen_widowx_interfaces__srv__ArmMode_Response__init(&mut msg as *mut _) {
        panic!("Call to trossen_widowx_interfaces__srv__ArmMode_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArmMode_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trossen_widowx_interfaces__srv__ArmMode_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trossen_widowx_interfaces__srv__ArmMode_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trossen_widowx_interfaces__srv__ArmMode_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArmMode_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArmMode_Response where Self: Sized {
  const TYPE_NAME: &'static str = "trossen_widowx_interfaces/srv/ArmMode_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__trossen_widowx_interfaces__srv__ArmMode_Response() }
  }
}


#[link(name = "trossen_widowx_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__trossen_widowx_interfaces__srv__JointModes_Request() -> *const std::ffi::c_void;
}

#[link(name = "trossen_widowx_interfaces__rosidl_generator_c")]
extern "C" {
    fn trossen_widowx_interfaces__srv__JointModes_Request__init(msg: *mut JointModes_Request) -> bool;
    fn trossen_widowx_interfaces__srv__JointModes_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointModes_Request>, size: usize) -> bool;
    fn trossen_widowx_interfaces__srv__JointModes_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointModes_Request>);
    fn trossen_widowx_interfaces__srv__JointModes_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointModes_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<JointModes_Request>) -> bool;
}

// Corresponds to trossen_widowx_interfaces__srv__JointModes_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointModes_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_mode: rosidl_runtime_rs::Sequence<i32>,

}



impl Default for JointModes_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !trossen_widowx_interfaces__srv__JointModes_Request__init(&mut msg as *mut _) {
        panic!("Call to trossen_widowx_interfaces__srv__JointModes_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointModes_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trossen_widowx_interfaces__srv__JointModes_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trossen_widowx_interfaces__srv__JointModes_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trossen_widowx_interfaces__srv__JointModes_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointModes_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointModes_Request where Self: Sized {
  const TYPE_NAME: &'static str = "trossen_widowx_interfaces/srv/JointModes_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__trossen_widowx_interfaces__srv__JointModes_Request() }
  }
}


#[link(name = "trossen_widowx_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__trossen_widowx_interfaces__srv__JointModes_Response() -> *const std::ffi::c_void;
}

#[link(name = "trossen_widowx_interfaces__rosidl_generator_c")]
extern "C" {
    fn trossen_widowx_interfaces__srv__JointModes_Response__init(msg: *mut JointModes_Response) -> bool;
    fn trossen_widowx_interfaces__srv__JointModes_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointModes_Response>, size: usize) -> bool;
    fn trossen_widowx_interfaces__srv__JointModes_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointModes_Response>);
    fn trossen_widowx_interfaces__srv__JointModes_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointModes_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<JointModes_Response>) -> bool;
}

// Corresponds to trossen_widowx_interfaces__srv__JointModes_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointModes_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for JointModes_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !trossen_widowx_interfaces__srv__JointModes_Response__init(&mut msg as *mut _) {
        panic!("Call to trossen_widowx_interfaces__srv__JointModes_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointModes_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trossen_widowx_interfaces__srv__JointModes_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trossen_widowx_interfaces__srv__JointModes_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trossen_widowx_interfaces__srv__JointModes_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointModes_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointModes_Response where Self: Sized {
  const TYPE_NAME: &'static str = "trossen_widowx_interfaces/srv/JointModes_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__trossen_widowx_interfaces__srv__JointModes_Response() }
  }
}


#[link(name = "trossen_widowx_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__trossen_widowx_interfaces__srv__ControlGripper_Request() -> *const std::ffi::c_void;
}

#[link(name = "trossen_widowx_interfaces__rosidl_generator_c")]
extern "C" {
    fn trossen_widowx_interfaces__srv__ControlGripper_Request__init(msg: *mut ControlGripper_Request) -> bool;
    fn trossen_widowx_interfaces__srv__ControlGripper_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ControlGripper_Request>, size: usize) -> bool;
    fn trossen_widowx_interfaces__srv__ControlGripper_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ControlGripper_Request>);
    fn trossen_widowx_interfaces__srv__ControlGripper_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ControlGripper_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ControlGripper_Request>) -> bool;
}

// Corresponds to trossen_widowx_interfaces__srv__ControlGripper_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !trossen_widowx_interfaces__srv__ControlGripper_Request__init(&mut msg as *mut _) {
        panic!("Call to trossen_widowx_interfaces__srv__ControlGripper_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ControlGripper_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trossen_widowx_interfaces__srv__ControlGripper_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trossen_widowx_interfaces__srv__ControlGripper_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trossen_widowx_interfaces__srv__ControlGripper_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ControlGripper_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ControlGripper_Request where Self: Sized {
  const TYPE_NAME: &'static str = "trossen_widowx_interfaces/srv/ControlGripper_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__trossen_widowx_interfaces__srv__ControlGripper_Request() }
  }
}


#[link(name = "trossen_widowx_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__trossen_widowx_interfaces__srv__ControlGripper_Response() -> *const std::ffi::c_void;
}

#[link(name = "trossen_widowx_interfaces__rosidl_generator_c")]
extern "C" {
    fn trossen_widowx_interfaces__srv__ControlGripper_Response__init(msg: *mut ControlGripper_Response) -> bool;
    fn trossen_widowx_interfaces__srv__ControlGripper_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ControlGripper_Response>, size: usize) -> bool;
    fn trossen_widowx_interfaces__srv__ControlGripper_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ControlGripper_Response>);
    fn trossen_widowx_interfaces__srv__ControlGripper_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ControlGripper_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ControlGripper_Response>) -> bool;
}

// Corresponds to trossen_widowx_interfaces__srv__ControlGripper_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ControlGripper_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for ControlGripper_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !trossen_widowx_interfaces__srv__ControlGripper_Response__init(&mut msg as *mut _) {
        panic!("Call to trossen_widowx_interfaces__srv__ControlGripper_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ControlGripper_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trossen_widowx_interfaces__srv__ControlGripper_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trossen_widowx_interfaces__srv__ControlGripper_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { trossen_widowx_interfaces__srv__ControlGripper_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ControlGripper_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ControlGripper_Response where Self: Sized {
  const TYPE_NAME: &'static str = "trossen_widowx_interfaces/srv/ControlGripper_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__trossen_widowx_interfaces__srv__ControlGripper_Response() }
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


