#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__msg__Output() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__msg__Output__init(msg: *mut Output) -> bool;
    fn crospi_interfaces__msg__Output__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Output>, size: usize) -> bool;
    fn crospi_interfaces__msg__Output__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Output>);
    fn crospi_interfaces__msg__Output__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Output>, out_seq: *mut rosidl_runtime_rs::Sequence<Output>) -> bool;
}

// Corresponds to crospi_interfaces__msg__Output
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// describes the output from eTaSL

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Output {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<f64>,

    /// The following can be used to check if the variable was declared as an output expression in the task specification. If not is_declared=false and the corresponding data is set to zero.
    pub is_declared: rosidl_runtime_rs::Sequence<bool>,

}



impl Default for Output {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__msg__Output__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__msg__Output__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Output {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__Output__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__Output__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__Output__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Output {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Output where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/msg/Output";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__msg__Output() }
  }
}


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__msg__OutputDerivatives() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__msg__OutputDerivatives__init(msg: *mut OutputDerivatives) -> bool;
    fn crospi_interfaces__msg__OutputDerivatives__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<OutputDerivatives>, size: usize) -> bool;
    fn crospi_interfaces__msg__OutputDerivatives__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<OutputDerivatives>);
    fn crospi_interfaces__msg__OutputDerivatives__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<OutputDerivatives>, out_seq: *mut rosidl_runtime_rs::Sequence<OutputDerivatives>) -> bool;
}

// Corresponds to crospi_interfaces__msg__OutputDerivatives
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// describes the output derivatives (i.e. time derivatives of variables/expressions) from eTaSL

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OutputDerivatives {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<f64>,

    /// The following can be used to check if the variable was declared as an output expression in the task specification. If not is_declared=false and the corresponding data is set to zero.
    pub is_declared: rosidl_runtime_rs::Sequence<bool>,

}



impl Default for OutputDerivatives {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__msg__OutputDerivatives__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__msg__OutputDerivatives__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for OutputDerivatives {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__OutputDerivatives__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__OutputDerivatives__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__OutputDerivatives__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for OutputDerivatives {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for OutputDerivatives where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/msg/OutputDerivatives";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__msg__OutputDerivatives() }
  }
}


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__msg__TaskParameters() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__msg__TaskParameters__init(msg: *mut TaskParameters) -> bool;
    fn crospi_interfaces__msg__TaskParameters__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskParameters>, size: usize) -> bool;
    fn crospi_interfaces__msg__TaskParameters__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskParameters>);
    fn crospi_interfaces__msg__TaskParameters__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskParameters>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskParameters>) -> bool;
}

// Corresponds to crospi_interfaces__msg__TaskParameters
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This describes parameters of an eTaSL task
/// the parameters are an unordered set.
/// we store them type-by-type

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskParameters {

    // This member is not documented.
    #[allow(missing_docs)]
    pub numbers: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NumberParameters>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub poses: rosidl_runtime_rs::Sequence<super::super::msg::rmw::PoseParameters>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vector3s: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Vector3Parameters>,

}



impl Default for TaskParameters {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__msg__TaskParameters__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__msg__TaskParameters__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskParameters {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__TaskParameters__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__TaskParameters__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__TaskParameters__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskParameters {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskParameters where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/msg/TaskParameters";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__msg__TaskParameters() }
  }
}


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__msg__PoseParameters() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__msg__PoseParameters__init(msg: *mut PoseParameters) -> bool;
    fn crospi_interfaces__msg__PoseParameters__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PoseParameters>, size: usize) -> bool;
    fn crospi_interfaces__msg__PoseParameters__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PoseParameters>);
    fn crospi_interfaces__msg__PoseParameters__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PoseParameters>, out_seq: *mut rosidl_runtime_rs::Sequence<PoseParameters>) -> bool;
}

// Corresponds to crospi_interfaces__msg__PoseParameters
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseParameters {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub poses: geometry_msgs::msg::rmw::Transform,

}



impl Default for PoseParameters {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__msg__PoseParameters__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__msg__PoseParameters__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PoseParameters {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__PoseParameters__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__PoseParameters__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__PoseParameters__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PoseParameters {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PoseParameters where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/msg/PoseParameters";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__msg__PoseParameters() }
  }
}


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__msg__Vector3Parameters() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__msg__Vector3Parameters__init(msg: *mut Vector3Parameters) -> bool;
    fn crospi_interfaces__msg__Vector3Parameters__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Vector3Parameters>, size: usize) -> bool;
    fn crospi_interfaces__msg__Vector3Parameters__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Vector3Parameters>);
    fn crospi_interfaces__msg__Vector3Parameters__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Vector3Parameters>, out_seq: *mut rosidl_runtime_rs::Sequence<Vector3Parameters>) -> bool;
}

// Corresponds to crospi_interfaces__msg__Vector3Parameters
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Vector3Parameters {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: geometry_msgs::msg::rmw::Vector3,

}



impl Default for Vector3Parameters {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__msg__Vector3Parameters__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__msg__Vector3Parameters__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Vector3Parameters {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__Vector3Parameters__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__Vector3Parameters__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__Vector3Parameters__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Vector3Parameters {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Vector3Parameters where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/msg/Vector3Parameters";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__msg__Vector3Parameters() }
  }
}


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__msg__NumberParameters() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__msg__NumberParameters__init(msg: *mut NumberParameters) -> bool;
    fn crospi_interfaces__msg__NumberParameters__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NumberParameters>, size: usize) -> bool;
    fn crospi_interfaces__msg__NumberParameters__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NumberParameters>);
    fn crospi_interfaces__msg__NumberParameters__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NumberParameters>, out_seq: *mut rosidl_runtime_rs::Sequence<NumberParameters>) -> bool;
}

// Corresponds to crospi_interfaces__msg__NumberParameters
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NumberParameters {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: f64,

}



impl Default for NumberParameters {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__msg__NumberParameters__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__msg__NumberParameters__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NumberParameters {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__NumberParameters__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__NumberParameters__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__NumberParameters__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NumberParameters {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NumberParameters where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/msg/NumberParameters";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__msg__NumberParameters() }
  }
}


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__msg__ReturnValue() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__msg__ReturnValue__init(msg: *mut ReturnValue) -> bool;
    fn crospi_interfaces__msg__ReturnValue__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReturnValue>, size: usize) -> bool;
    fn crospi_interfaces__msg__ReturnValue__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReturnValue>);
    fn crospi_interfaces__msg__ReturnValue__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReturnValue>, out_seq: *mut rosidl_runtime_rs::Sequence<ReturnValue>) -> bool;
}

// Corresponds to crospi_interfaces__msg__ReturnValue
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// error messages returned by eTaSL

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReturnValue {
    /// error code returned
    pub errorcode: u32,

    /// string given additional description of the error
    pub description: rosidl_runtime_rs::String,

}

impl ReturnValue {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SUCCESS: u32 = 0;

    /// LoadTask errors
    pub const SYNTAX_ERROR: u32 = 1;

    /// InitializeTask errors:
    pub const FEATUREVAR_DID_NOT_CONVERGE: u32 = 1000;

    /// RunTask errors:
    pub const SOLVER_DID_NOT_CONVERGE: u32 = 2000;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CANCELLED: u32 = 2;

}


impl Default for ReturnValue {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__msg__ReturnValue__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__msg__ReturnValue__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReturnValue {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__ReturnValue__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__ReturnValue__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__ReturnValue__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReturnValue {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReturnValue where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/msg/ReturnValue";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__msg__ReturnValue() }
  }
}


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__msg__Input() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__msg__Input__init(msg: *mut Input) -> bool;
    fn crospi_interfaces__msg__Input__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Input>, size: usize) -> bool;
    fn crospi_interfaces__msg__Input__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Input>);
    fn crospi_interfaces__msg__Input__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Input>, out_seq: *mut rosidl_runtime_rs::Sequence<Input>) -> bool;
}

// Corresponds to crospi_interfaces__msg__Input
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// describes the input from eTaSL

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Input {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for Input {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__msg__Input__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__msg__Input__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Input {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__Input__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__Input__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__Input__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Input {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Input where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/msg/Input";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__msg__Input() }
  }
}


#[link(name = "crospi_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__msg__Test() -> *const std::ffi::c_void;
}

#[link(name = "crospi_interfaces__rosidl_generator_c")]
extern "C" {
    fn crospi_interfaces__msg__Test__init(msg: *mut Test) -> bool;
    fn crospi_interfaces__msg__Test__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Test>, size: usize) -> bool;
    fn crospi_interfaces__msg__Test__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Test>);
    fn crospi_interfaces__msg__Test__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Test>, out_seq: *mut rosidl_runtime_rs::Sequence<Test>) -> bool;
}

// Corresponds to crospi_interfaces__msg__Test
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Test {

    // This member is not documented.
    #[allow(missing_docs)]
    pub a: bool,

}



impl Default for Test {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !crospi_interfaces__msg__Test__init(&mut msg as *mut _) {
        panic!("Call to crospi_interfaces__msg__Test__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Test {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__Test__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__Test__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { crospi_interfaces__msg__Test__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Test {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Test where Self: Sized {
  const TYPE_NAME: &'static str = "crospi_interfaces/msg/Test";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__crospi_interfaces__msg__Test() }
  }
}


