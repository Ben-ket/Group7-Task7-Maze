// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from maze_msgs:action/MoveYaw.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "maze_msgs/action/detail/move_yaw__functions.h"
#include "maze_msgs/action/detail/move_yaw__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveYaw_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_Goal_type_support_ids_t;

static const _MoveYaw_Goal_type_support_ids_t _MoveYaw_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveYaw_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveYaw_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveYaw_Goal_type_support_symbol_names_t _MoveYaw_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, maze_msgs, action, MoveYaw_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maze_msgs, action, MoveYaw_Goal)),
  }
};

typedef struct _MoveYaw_Goal_type_support_data_t
{
  void * data[2];
} _MoveYaw_Goal_type_support_data_t;

static _MoveYaw_Goal_type_support_data_t _MoveYaw_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveYaw_Goal_message_typesupport_map = {
  2,
  "maze_msgs",
  &_MoveYaw_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_MoveYaw_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_MoveYaw_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveYaw_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_Goal__get_type_hash,
  &maze_msgs__action__MoveYaw_Goal__get_type_description,
  &maze_msgs__action__MoveYaw_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace maze_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maze_msgs::action::MoveYaw_Goal>()
{
  return &::maze_msgs::action::rosidl_typesupport_cpp::MoveYaw_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, maze_msgs, action, MoveYaw_Goal)() {
  return get_message_type_support_handle<maze_msgs::action::MoveYaw_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveYaw_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_Result_type_support_ids_t;

static const _MoveYaw_Result_type_support_ids_t _MoveYaw_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveYaw_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveYaw_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveYaw_Result_type_support_symbol_names_t _MoveYaw_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, maze_msgs, action, MoveYaw_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maze_msgs, action, MoveYaw_Result)),
  }
};

typedef struct _MoveYaw_Result_type_support_data_t
{
  void * data[2];
} _MoveYaw_Result_type_support_data_t;

static _MoveYaw_Result_type_support_data_t _MoveYaw_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveYaw_Result_message_typesupport_map = {
  2,
  "maze_msgs",
  &_MoveYaw_Result_message_typesupport_ids.typesupport_identifier[0],
  &_MoveYaw_Result_message_typesupport_symbol_names.symbol_name[0],
  &_MoveYaw_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveYaw_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_Result__get_type_hash,
  &maze_msgs__action__MoveYaw_Result__get_type_description,
  &maze_msgs__action__MoveYaw_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace maze_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maze_msgs::action::MoveYaw_Result>()
{
  return &::maze_msgs::action::rosidl_typesupport_cpp::MoveYaw_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, maze_msgs, action, MoveYaw_Result)() {
  return get_message_type_support_handle<maze_msgs::action::MoveYaw_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveYaw_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_Feedback_type_support_ids_t;

static const _MoveYaw_Feedback_type_support_ids_t _MoveYaw_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveYaw_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveYaw_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveYaw_Feedback_type_support_symbol_names_t _MoveYaw_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, maze_msgs, action, MoveYaw_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maze_msgs, action, MoveYaw_Feedback)),
  }
};

typedef struct _MoveYaw_Feedback_type_support_data_t
{
  void * data[2];
} _MoveYaw_Feedback_type_support_data_t;

static _MoveYaw_Feedback_type_support_data_t _MoveYaw_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveYaw_Feedback_message_typesupport_map = {
  2,
  "maze_msgs",
  &_MoveYaw_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_MoveYaw_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_MoveYaw_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveYaw_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_Feedback__get_type_hash,
  &maze_msgs__action__MoveYaw_Feedback__get_type_description,
  &maze_msgs__action__MoveYaw_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace maze_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maze_msgs::action::MoveYaw_Feedback>()
{
  return &::maze_msgs::action::rosidl_typesupport_cpp::MoveYaw_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, maze_msgs, action, MoveYaw_Feedback)() {
  return get_message_type_support_handle<maze_msgs::action::MoveYaw_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveYaw_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_SendGoal_Request_type_support_ids_t;

static const _MoveYaw_SendGoal_Request_type_support_ids_t _MoveYaw_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveYaw_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveYaw_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveYaw_SendGoal_Request_type_support_symbol_names_t _MoveYaw_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, maze_msgs, action, MoveYaw_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maze_msgs, action, MoveYaw_SendGoal_Request)),
  }
};

typedef struct _MoveYaw_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _MoveYaw_SendGoal_Request_type_support_data_t;

static _MoveYaw_SendGoal_Request_type_support_data_t _MoveYaw_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveYaw_SendGoal_Request_message_typesupport_map = {
  2,
  "maze_msgs",
  &_MoveYaw_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveYaw_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveYaw_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveYaw_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_SendGoal_Request__get_type_hash,
  &maze_msgs__action__MoveYaw_SendGoal_Request__get_type_description,
  &maze_msgs__action__MoveYaw_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace maze_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maze_msgs::action::MoveYaw_SendGoal_Request>()
{
  return &::maze_msgs::action::rosidl_typesupport_cpp::MoveYaw_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, maze_msgs, action, MoveYaw_SendGoal_Request)() {
  return get_message_type_support_handle<maze_msgs::action::MoveYaw_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveYaw_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_SendGoal_Response_type_support_ids_t;

static const _MoveYaw_SendGoal_Response_type_support_ids_t _MoveYaw_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveYaw_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveYaw_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveYaw_SendGoal_Response_type_support_symbol_names_t _MoveYaw_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, maze_msgs, action, MoveYaw_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maze_msgs, action, MoveYaw_SendGoal_Response)),
  }
};

typedef struct _MoveYaw_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _MoveYaw_SendGoal_Response_type_support_data_t;

static _MoveYaw_SendGoal_Response_type_support_data_t _MoveYaw_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveYaw_SendGoal_Response_message_typesupport_map = {
  2,
  "maze_msgs",
  &_MoveYaw_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveYaw_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveYaw_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveYaw_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_SendGoal_Response__get_type_hash,
  &maze_msgs__action__MoveYaw_SendGoal_Response__get_type_description,
  &maze_msgs__action__MoveYaw_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace maze_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maze_msgs::action::MoveYaw_SendGoal_Response>()
{
  return &::maze_msgs::action::rosidl_typesupport_cpp::MoveYaw_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, maze_msgs, action, MoveYaw_SendGoal_Response)() {
  return get_message_type_support_handle<maze_msgs::action::MoveYaw_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveYaw_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_SendGoal_Event_type_support_ids_t;

static const _MoveYaw_SendGoal_Event_type_support_ids_t _MoveYaw_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveYaw_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveYaw_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveYaw_SendGoal_Event_type_support_symbol_names_t _MoveYaw_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, maze_msgs, action, MoveYaw_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maze_msgs, action, MoveYaw_SendGoal_Event)),
  }
};

typedef struct _MoveYaw_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _MoveYaw_SendGoal_Event_type_support_data_t;

static _MoveYaw_SendGoal_Event_type_support_data_t _MoveYaw_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveYaw_SendGoal_Event_message_typesupport_map = {
  2,
  "maze_msgs",
  &_MoveYaw_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MoveYaw_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MoveYaw_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveYaw_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_SendGoal_Event__get_type_hash,
  &maze_msgs__action__MoveYaw_SendGoal_Event__get_type_description,
  &maze_msgs__action__MoveYaw_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace maze_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maze_msgs::action::MoveYaw_SendGoal_Event>()
{
  return &::maze_msgs::action::rosidl_typesupport_cpp::MoveYaw_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, maze_msgs, action, MoveYaw_SendGoal_Event)() {
  return get_message_type_support_handle<maze_msgs::action::MoveYaw_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveYaw_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_SendGoal_type_support_ids_t;

static const _MoveYaw_SendGoal_type_support_ids_t _MoveYaw_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveYaw_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveYaw_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveYaw_SendGoal_type_support_symbol_names_t _MoveYaw_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, maze_msgs, action, MoveYaw_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maze_msgs, action, MoveYaw_SendGoal)),
  }
};

typedef struct _MoveYaw_SendGoal_type_support_data_t
{
  void * data[2];
} _MoveYaw_SendGoal_type_support_data_t;

static _MoveYaw_SendGoal_type_support_data_t _MoveYaw_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveYaw_SendGoal_service_typesupport_map = {
  2,
  "maze_msgs",
  &_MoveYaw_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_MoveYaw_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_MoveYaw_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveYaw_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<maze_msgs::action::MoveYaw_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<maze_msgs::action::MoveYaw_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<maze_msgs::action::MoveYaw_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<maze_msgs::action::MoveYaw_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<maze_msgs::action::MoveYaw_SendGoal>,
  &maze_msgs__action__MoveYaw_SendGoal__get_type_hash,
  &maze_msgs__action__MoveYaw_SendGoal__get_type_description,
  &maze_msgs__action__MoveYaw_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace maze_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<maze_msgs::action::MoveYaw_SendGoal>()
{
  return &::maze_msgs::action::rosidl_typesupport_cpp::MoveYaw_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, maze_msgs, action, MoveYaw_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<maze_msgs::action::MoveYaw_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveYaw_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_GetResult_Request_type_support_ids_t;

static const _MoveYaw_GetResult_Request_type_support_ids_t _MoveYaw_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveYaw_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveYaw_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveYaw_GetResult_Request_type_support_symbol_names_t _MoveYaw_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, maze_msgs, action, MoveYaw_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maze_msgs, action, MoveYaw_GetResult_Request)),
  }
};

typedef struct _MoveYaw_GetResult_Request_type_support_data_t
{
  void * data[2];
} _MoveYaw_GetResult_Request_type_support_data_t;

static _MoveYaw_GetResult_Request_type_support_data_t _MoveYaw_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveYaw_GetResult_Request_message_typesupport_map = {
  2,
  "maze_msgs",
  &_MoveYaw_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_MoveYaw_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_MoveYaw_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveYaw_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_GetResult_Request__get_type_hash,
  &maze_msgs__action__MoveYaw_GetResult_Request__get_type_description,
  &maze_msgs__action__MoveYaw_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace maze_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maze_msgs::action::MoveYaw_GetResult_Request>()
{
  return &::maze_msgs::action::rosidl_typesupport_cpp::MoveYaw_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, maze_msgs, action, MoveYaw_GetResult_Request)() {
  return get_message_type_support_handle<maze_msgs::action::MoveYaw_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveYaw_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_GetResult_Response_type_support_ids_t;

static const _MoveYaw_GetResult_Response_type_support_ids_t _MoveYaw_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveYaw_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveYaw_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveYaw_GetResult_Response_type_support_symbol_names_t _MoveYaw_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, maze_msgs, action, MoveYaw_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maze_msgs, action, MoveYaw_GetResult_Response)),
  }
};

typedef struct _MoveYaw_GetResult_Response_type_support_data_t
{
  void * data[2];
} _MoveYaw_GetResult_Response_type_support_data_t;

static _MoveYaw_GetResult_Response_type_support_data_t _MoveYaw_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveYaw_GetResult_Response_message_typesupport_map = {
  2,
  "maze_msgs",
  &_MoveYaw_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_MoveYaw_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_MoveYaw_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveYaw_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_GetResult_Response__get_type_hash,
  &maze_msgs__action__MoveYaw_GetResult_Response__get_type_description,
  &maze_msgs__action__MoveYaw_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace maze_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maze_msgs::action::MoveYaw_GetResult_Response>()
{
  return &::maze_msgs::action::rosidl_typesupport_cpp::MoveYaw_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, maze_msgs, action, MoveYaw_GetResult_Response)() {
  return get_message_type_support_handle<maze_msgs::action::MoveYaw_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveYaw_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_GetResult_Event_type_support_ids_t;

static const _MoveYaw_GetResult_Event_type_support_ids_t _MoveYaw_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveYaw_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveYaw_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveYaw_GetResult_Event_type_support_symbol_names_t _MoveYaw_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, maze_msgs, action, MoveYaw_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maze_msgs, action, MoveYaw_GetResult_Event)),
  }
};

typedef struct _MoveYaw_GetResult_Event_type_support_data_t
{
  void * data[2];
} _MoveYaw_GetResult_Event_type_support_data_t;

static _MoveYaw_GetResult_Event_type_support_data_t _MoveYaw_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveYaw_GetResult_Event_message_typesupport_map = {
  2,
  "maze_msgs",
  &_MoveYaw_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_MoveYaw_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_MoveYaw_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveYaw_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_GetResult_Event__get_type_hash,
  &maze_msgs__action__MoveYaw_GetResult_Event__get_type_description,
  &maze_msgs__action__MoveYaw_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace maze_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maze_msgs::action::MoveYaw_GetResult_Event>()
{
  return &::maze_msgs::action::rosidl_typesupport_cpp::MoveYaw_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, maze_msgs, action, MoveYaw_GetResult_Event)() {
  return get_message_type_support_handle<maze_msgs::action::MoveYaw_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveYaw_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_GetResult_type_support_ids_t;

static const _MoveYaw_GetResult_type_support_ids_t _MoveYaw_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveYaw_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveYaw_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveYaw_GetResult_type_support_symbol_names_t _MoveYaw_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, maze_msgs, action, MoveYaw_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maze_msgs, action, MoveYaw_GetResult)),
  }
};

typedef struct _MoveYaw_GetResult_type_support_data_t
{
  void * data[2];
} _MoveYaw_GetResult_type_support_data_t;

static _MoveYaw_GetResult_type_support_data_t _MoveYaw_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveYaw_GetResult_service_typesupport_map = {
  2,
  "maze_msgs",
  &_MoveYaw_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_MoveYaw_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_MoveYaw_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t MoveYaw_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<maze_msgs::action::MoveYaw_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<maze_msgs::action::MoveYaw_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<maze_msgs::action::MoveYaw_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<maze_msgs::action::MoveYaw_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<maze_msgs::action::MoveYaw_GetResult>,
  &maze_msgs__action__MoveYaw_GetResult__get_type_hash,
  &maze_msgs__action__MoveYaw_GetResult__get_type_description,
  &maze_msgs__action__MoveYaw_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace maze_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<maze_msgs::action::MoveYaw_GetResult>()
{
  return &::maze_msgs::action::rosidl_typesupport_cpp::MoveYaw_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, maze_msgs, action, MoveYaw_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<maze_msgs::action::MoveYaw_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _MoveYaw_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_FeedbackMessage_type_support_ids_t;

static const _MoveYaw_FeedbackMessage_type_support_ids_t _MoveYaw_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _MoveYaw_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MoveYaw_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MoveYaw_FeedbackMessage_type_support_symbol_names_t _MoveYaw_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, maze_msgs, action, MoveYaw_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, maze_msgs, action, MoveYaw_FeedbackMessage)),
  }
};

typedef struct _MoveYaw_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _MoveYaw_FeedbackMessage_type_support_data_t;

static _MoveYaw_FeedbackMessage_type_support_data_t _MoveYaw_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MoveYaw_FeedbackMessage_message_typesupport_map = {
  2,
  "maze_msgs",
  &_MoveYaw_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MoveYaw_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MoveYaw_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MoveYaw_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_FeedbackMessage__get_type_hash,
  &maze_msgs__action__MoveYaw_FeedbackMessage__get_type_description,
  &maze_msgs__action__MoveYaw_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace maze_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<maze_msgs::action::MoveYaw_FeedbackMessage>()
{
  return &::maze_msgs::action::rosidl_typesupport_cpp::MoveYaw_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, maze_msgs, action, MoveYaw_FeedbackMessage)() {
  return get_message_type_support_handle<maze_msgs::action::MoveYaw_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t MoveYaw_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &maze_msgs__action__MoveYaw__get_type_hash,
  &maze_msgs__action__MoveYaw__get_type_description,
  &maze_msgs__action__MoveYaw__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace maze_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<maze_msgs::action::MoveYaw>()
{
  using ::maze_msgs::action::rosidl_typesupport_cpp::MoveYaw_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  MoveYaw_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::maze_msgs::action::MoveYaw::Impl::SendGoalService>();
  MoveYaw_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::maze_msgs::action::MoveYaw::Impl::GetResultService>();
  MoveYaw_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::maze_msgs::action::MoveYaw::Impl::CancelGoalService>();
  MoveYaw_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::maze_msgs::action::MoveYaw::Impl::FeedbackMessage>();
  MoveYaw_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::maze_msgs::action::MoveYaw::Impl::GoalStatusMessage>();
  return &MoveYaw_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, maze_msgs, action, MoveYaw)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<maze_msgs::action::MoveYaw>();
}

#ifdef __cplusplus
}
#endif
