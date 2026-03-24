
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__action__RunTask_Goal() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__action__RunTask_Goal__init(msg: *mut RunTask_Goal) -> bool;
    fn crospi_interfaces__action__RunTask_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RunTask_Goal>, size: usize) -> bool;
    fn crospi_interfaces__action__RunTask_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RunTask_Goal>);
    fn crospi_interfaces__action__RunTask_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RunTask_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<RunTask_Goal>) -> bool;
}

// Corresponds to crospi_interfaces__action__RunTask_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunTask_Goal {
    /// GOAL definition ##################
    /// JSON description of the task:
    pub task: rosidl_runtime_rs::String,

}



impl Default for RunTask_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__action__RunTask_Goal__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__action__RunTask_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RunTask_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RunTask_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RunTask_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/action/RunTask_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__action__RunTask_Goal() }
  }
}


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__action__RunTask_Result() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__action__RunTask_Result__init(msg: *mut RunTask_Result) -> bool;
    fn crospi_interfaces__action__RunTask_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RunTask_Result>, size: usize) -> bool;
    fn crospi_interfaces__action__RunTask_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RunTask_Result>);
    fn crospi_interfaces__action__RunTask_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RunTask_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<RunTask_Result>) -> bool;
}

// Corresponds to crospi_interfaces__action__RunTask_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunTask_Result {
    /// Name of the event that terminated the controller
    pub terminating_event: rosidl_runtime_rs::String,

    /// Argument of the event
    pub event_argument: rosidl_runtime_rs::String,

}



impl Default for RunTask_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__action__RunTask_Result__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__action__RunTask_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RunTask_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RunTask_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RunTask_Result where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/action/RunTask_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__action__RunTask_Result() }
  }
}


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__action__RunTask_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__action__RunTask_Feedback__init(msg: *mut RunTask_Feedback) -> bool;
    fn crospi_interfaces__action__RunTask_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RunTask_Feedback>, size: usize) -> bool;
    fn crospi_interfaces__action__RunTask_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RunTask_Feedback>);
    fn crospi_interfaces__action__RunTask_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RunTask_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<RunTask_Feedback>) -> bool;
}

// Corresponds to crospi_interfaces__action__RunTask_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunTask_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub event: rosidl_runtime_rs::String,

}



impl Default for RunTask_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__action__RunTask_Feedback__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__action__RunTask_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RunTask_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RunTask_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RunTask_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/action/RunTask_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__action__RunTask_Feedback() }
  }
}


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__action__RunTask_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__action__RunTask_FeedbackMessage__init(msg: *mut RunTask_FeedbackMessage) -> bool;
    fn crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RunTask_FeedbackMessage>, size: usize) -> bool;
    fn crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RunTask_FeedbackMessage>);
    fn crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RunTask_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<RunTask_FeedbackMessage>) -> bool;
}

// Corresponds to crospi_interfaces__action__RunTask_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunTask_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::RunTask_Feedback,

}



impl Default for RunTask_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__action__RunTask_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__action__RunTask_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RunTask_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RunTask_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RunTask_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/action/RunTask_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__action__RunTask_FeedbackMessage() }
  }
}




#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__action__RunTask_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__action__RunTask_SendGoal_Request__init(msg: *mut RunTask_SendGoal_Request) -> bool;
    fn crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RunTask_SendGoal_Request>, size: usize) -> bool;
    fn crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RunTask_SendGoal_Request>);
    fn crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RunTask_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RunTask_SendGoal_Request>) -> bool;
}

// Corresponds to crospi_interfaces__action__RunTask_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunTask_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::RunTask_Goal,

}



impl Default for RunTask_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__action__RunTask_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__action__RunTask_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RunTask_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RunTask_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RunTask_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/action/RunTask_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__action__RunTask_SendGoal_Request() }
  }
}


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__action__RunTask_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__action__RunTask_SendGoal_Response__init(msg: *mut RunTask_SendGoal_Response) -> bool;
    fn crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RunTask_SendGoal_Response>, size: usize) -> bool;
    fn crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RunTask_SendGoal_Response>);
    fn crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RunTask_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RunTask_SendGoal_Response>) -> bool;
}

// Corresponds to crospi_interfaces__action__RunTask_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunTask_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for RunTask_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__action__RunTask_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__action__RunTask_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RunTask_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RunTask_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RunTask_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/action/RunTask_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__action__RunTask_SendGoal_Response() }
  }
}


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__action__RunTask_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__action__RunTask_GetResult_Request__init(msg: *mut RunTask_GetResult_Request) -> bool;
    fn crospi_interfaces__action__RunTask_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RunTask_GetResult_Request>, size: usize) -> bool;
    fn crospi_interfaces__action__RunTask_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RunTask_GetResult_Request>);
    fn crospi_interfaces__action__RunTask_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RunTask_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RunTask_GetResult_Request>) -> bool;
}

// Corresponds to crospi_interfaces__action__RunTask_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunTask_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for RunTask_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__action__RunTask_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__action__RunTask_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RunTask_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RunTask_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RunTask_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/action/RunTask_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__action__RunTask_GetResult_Request() }
  }
}


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__action__RunTask_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__action__RunTask_GetResult_Response__init(msg: *mut RunTask_GetResult_Response) -> bool;
    fn crospi_interfaces__action__RunTask_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RunTask_GetResult_Response>, size: usize) -> bool;
    fn crospi_interfaces__action__RunTask_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RunTask_GetResult_Response>);
    fn crospi_interfaces__action__RunTask_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RunTask_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RunTask_GetResult_Response>) -> bool;
}

// Corresponds to crospi_interfaces__action__RunTask_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RunTask_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::RunTask_Result,

}



impl Default for RunTask_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__action__RunTask_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__action__RunTask_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RunTask_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__action__RunTask_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RunTask_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RunTask_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/action/RunTask_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__action__RunTask_GetResult_Response() }
  }
}






#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__crospi_interfaces__action__RunTask_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to crospi_interfaces__action__RunTask_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct RunTask_SendGoal;

impl rosidl_runtime_rs::Service for RunTask_SendGoal {
    type Request = RunTask_SendGoal_Request;
    type Response = RunTask_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__crospi_interfaces__action__RunTask_SendGoal() }
    }
}




#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__crospi_interfaces__action__RunTask_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to crospi_interfaces__action__RunTask_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct RunTask_GetResult;

impl rosidl_runtime_rs::Service for RunTask_GetResult {
    type Request = RunTask_GetResult_Request;
    type Response = RunTask_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__crospi_interfaces__action__RunTask_GetResult() }
    }
}


