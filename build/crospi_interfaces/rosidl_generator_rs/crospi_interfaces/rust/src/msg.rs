#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to crospi_interfaces__msg__Output
/// describes the output from eTaSL

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Output {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<f64>,

    /// The following can be used to check if the variable was declared as an output expression in the task specification. If not is_declared=false and the corresponding data is set to zero.
    pub is_declared: Vec<bool>,

}



impl Default for Output {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Output::default())
  }
}

impl rosidl_runtime_rs::Message for Output {
  type RmwMsg = super::msg::rmw::Output;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        data: msg.data.into(),
        is_declared: msg.is_declared.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        data: msg.data.as_slice().into(),
        is_declared: msg.is_declared.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      names: msg.names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      data: msg.data
          .into_iter()
          .collect(),
      is_declared: msg.is_declared
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to crospi_interfaces__msg__OutputDerivatives
/// describes the output derivatives (i.e. time derivatives of variables/expressions) from eTaSL

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct OutputDerivatives {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<f64>,

    /// The following can be used to check if the variable was declared as an output expression in the task specification. If not is_declared=false and the corresponding data is set to zero.
    pub is_declared: Vec<bool>,

}



impl Default for OutputDerivatives {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::OutputDerivatives::default())
  }
}

impl rosidl_runtime_rs::Message for OutputDerivatives {
  type RmwMsg = super::msg::rmw::OutputDerivatives;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        data: msg.data.into(),
        is_declared: msg.is_declared.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        data: msg.data.as_slice().into(),
        is_declared: msg.is_declared.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      names: msg.names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      data: msg.data
          .into_iter()
          .collect(),
      is_declared: msg.is_declared
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to crospi_interfaces__msg__TaskParameters
/// This describes parameters of an eTaSL task
/// the parameters are an unordered set.
/// we store them type-by-type

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskParameters {

    // This member is not documented.
    #[allow(missing_docs)]
    pub numbers: Vec<super::msg::NumberParameters>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub poses: Vec<super::msg::PoseParameters>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vector3s: Vec<super::msg::Vector3Parameters>,

}



impl Default for TaskParameters {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TaskParameters::default())
  }
}

impl rosidl_runtime_rs::Message for TaskParameters {
  type RmwMsg = super::msg::rmw::TaskParameters;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        numbers: msg.numbers
          .into_iter()
          .map(|elem| super::msg::NumberParameters::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        poses: msg.poses
          .into_iter()
          .map(|elem| super::msg::PoseParameters::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        vector3s: msg.vector3s
          .into_iter()
          .map(|elem| super::msg::Vector3Parameters::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        numbers: msg.numbers
          .iter()
          .map(|elem| super::msg::NumberParameters::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        poses: msg.poses
          .iter()
          .map(|elem| super::msg::PoseParameters::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        vector3s: msg.vector3s
          .iter()
          .map(|elem| super::msg::Vector3Parameters::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      numbers: msg.numbers
          .into_iter()
          .map(super::msg::NumberParameters::from_rmw_message)
          .collect(),
      poses: msg.poses
          .into_iter()
          .map(super::msg::PoseParameters::from_rmw_message)
          .collect(),
      vector3s: msg.vector3s
          .into_iter()
          .map(super::msg::Vector3Parameters::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to crospi_interfaces__msg__PoseParameters

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PoseParameters {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub poses: geometry_msgs::msg::Transform,

}



impl Default for PoseParameters {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::PoseParameters::default())
  }
}

impl rosidl_runtime_rs::Message for PoseParameters {
  type RmwMsg = super::msg::rmw::PoseParameters;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        poses: geometry_msgs::msg::Transform::into_rmw_message(std::borrow::Cow::Owned(msg.poses)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        poses: geometry_msgs::msg::Transform::into_rmw_message(std::borrow::Cow::Borrowed(&msg.poses)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      poses: geometry_msgs::msg::Transform::from_rmw_message(msg.poses),
    }
  }
}


// Corresponds to crospi_interfaces__msg__Vector3Parameters

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Vector3Parameters {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: geometry_msgs::msg::Vector3,

}



impl Default for Vector3Parameters {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Vector3Parameters::default())
  }
}

impl rosidl_runtime_rs::Message for Vector3Parameters {
  type RmwMsg = super::msg::rmw::Vector3Parameters;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        value: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.value)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        value: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.value)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      value: geometry_msgs::msg::Vector3::from_rmw_message(msg.value),
    }
  }
}


// Corresponds to crospi_interfaces__msg__NumberParameters

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NumberParameters {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: f64,

}



impl Default for NumberParameters {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NumberParameters::default())
  }
}

impl rosidl_runtime_rs::Message for NumberParameters {
  type RmwMsg = super::msg::rmw::NumberParameters;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      value: msg.value,
    }
  }
}


// Corresponds to crospi_interfaces__msg__ReturnValue
/// error messages returned by eTaSL

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReturnValue {
    /// error code returned
    pub errorcode: u32,

    /// string given additional description of the error
    pub description: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ReturnValue::default())
  }
}

impl rosidl_runtime_rs::Message for ReturnValue {
  type RmwMsg = super::msg::rmw::ReturnValue;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        errorcode: msg.errorcode,
        description: msg.description.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      errorcode: msg.errorcode,
        description: msg.description.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      errorcode: msg.errorcode,
      description: msg.description.to_string(),
    }
  }
}


// Corresponds to crospi_interfaces__msg__Input
/// describes the input from eTaSL

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Input {

    // This member is not documented.
    #[allow(missing_docs)]
    pub names: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<f64>,

}



impl Default for Input {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Input::default())
  }
}

impl rosidl_runtime_rs::Message for Input {
  type RmwMsg = super::msg::rmw::Input;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        names: msg.names
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      names: msg.names
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to crospi_interfaces__msg__Test

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Test {

    // This member is not documented.
    #[allow(missing_docs)]
    pub a: bool,

}



impl Default for Test {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Test::default())
  }
}

impl rosidl_runtime_rs::Message for Test {
  type RmwMsg = super::msg::rmw::Test;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        a: msg.a,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      a: msg.a,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      a: msg.a,
    }
  }
}


