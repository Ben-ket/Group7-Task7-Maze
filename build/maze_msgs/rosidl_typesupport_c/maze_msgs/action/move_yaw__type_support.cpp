// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from maze_msgs:action/MoveYaw.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "maze_msgs/action/detail/move_yaw__struct.h"
#include "maze_msgs/action/detail/move_yaw__type_support.h"
#include "maze_msgs/action/detail/move_yaw__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveYaw_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_Goal_type_support_ids_t;

static const _MoveYaw_Goal_type_support_ids_t _MoveYaw_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_msgs, action, MoveYaw_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_msgs, action, MoveYaw_Goal)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_Goal__get_type_hash,
  &maze_msgs__action__MoveYaw_Goal__get_type_description,
  &maze_msgs__action__MoveYaw_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_msgs, action, MoveYaw_Goal)() {
  return &::maze_msgs::action::rosidl_typesupport_c::MoveYaw_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__type_support.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveYaw_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_Result_type_support_ids_t;

static const _MoveYaw_Result_type_support_ids_t _MoveYaw_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_msgs, action, MoveYaw_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_msgs, action, MoveYaw_Result)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_Result__get_type_hash,
  &maze_msgs__action__MoveYaw_Result__get_type_description,
  &maze_msgs__action__MoveYaw_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_msgs, action, MoveYaw_Result)() {
  return &::maze_msgs::action::rosidl_typesupport_c::MoveYaw_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__type_support.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveYaw_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_Feedback_type_support_ids_t;

static const _MoveYaw_Feedback_type_support_ids_t _MoveYaw_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_msgs, action, MoveYaw_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_msgs, action, MoveYaw_Feedback)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_Feedback__get_type_hash,
  &maze_msgs__action__MoveYaw_Feedback__get_type_description,
  &maze_msgs__action__MoveYaw_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_msgs, action, MoveYaw_Feedback)() {
  return &::maze_msgs::action::rosidl_typesupport_c::MoveYaw_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__type_support.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveYaw_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_SendGoal_Request_type_support_ids_t;

static const _MoveYaw_SendGoal_Request_type_support_ids_t _MoveYaw_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_msgs, action, MoveYaw_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_msgs, action, MoveYaw_SendGoal_Request)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_SendGoal_Request__get_type_hash,
  &maze_msgs__action__MoveYaw_SendGoal_Request__get_type_description,
  &maze_msgs__action__MoveYaw_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_msgs, action, MoveYaw_SendGoal_Request)() {
  return &::maze_msgs::action::rosidl_typesupport_c::MoveYaw_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__type_support.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveYaw_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_SendGoal_Response_type_support_ids_t;

static const _MoveYaw_SendGoal_Response_type_support_ids_t _MoveYaw_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_msgs, action, MoveYaw_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_msgs, action, MoveYaw_SendGoal_Response)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_SendGoal_Response__get_type_hash,
  &maze_msgs__action__MoveYaw_SendGoal_Response__get_type_description,
  &maze_msgs__action__MoveYaw_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_msgs, action, MoveYaw_SendGoal_Response)() {
  return &::maze_msgs::action::rosidl_typesupport_c::MoveYaw_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__type_support.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveYaw_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_SendGoal_Event_type_support_ids_t;

static const _MoveYaw_SendGoal_Event_type_support_ids_t _MoveYaw_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_msgs, action, MoveYaw_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_msgs, action, MoveYaw_SendGoal_Event)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_SendGoal_Event__get_type_hash,
  &maze_msgs__action__MoveYaw_SendGoal_Event__get_type_description,
  &maze_msgs__action__MoveYaw_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_msgs, action, MoveYaw_SendGoal_Event)() {
  return &::maze_msgs::action::rosidl_typesupport_c::MoveYaw_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _MoveYaw_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_SendGoal_type_support_ids_t;

static const _MoveYaw_SendGoal_type_support_ids_t _MoveYaw_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_msgs, action, MoveYaw_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_msgs, action, MoveYaw_SendGoal)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &MoveYaw_SendGoal_Request_message_type_support_handle,
  &MoveYaw_SendGoal_Response_message_type_support_handle,
  &MoveYaw_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    maze_msgs,
    action,
    MoveYaw_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    maze_msgs,
    action,
    MoveYaw_SendGoal
  ),
  &maze_msgs__action__MoveYaw_SendGoal__get_type_hash,
  &maze_msgs__action__MoveYaw_SendGoal__get_type_description,
  &maze_msgs__action__MoveYaw_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, maze_msgs, action, MoveYaw_SendGoal)() {
  return &::maze_msgs::action::rosidl_typesupport_c::MoveYaw_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__type_support.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveYaw_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_GetResult_Request_type_support_ids_t;

static const _MoveYaw_GetResult_Request_type_support_ids_t _MoveYaw_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_msgs, action, MoveYaw_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_msgs, action, MoveYaw_GetResult_Request)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_GetResult_Request__get_type_hash,
  &maze_msgs__action__MoveYaw_GetResult_Request__get_type_description,
  &maze_msgs__action__MoveYaw_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_msgs, action, MoveYaw_GetResult_Request)() {
  return &::maze_msgs::action::rosidl_typesupport_c::MoveYaw_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__type_support.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveYaw_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_GetResult_Response_type_support_ids_t;

static const _MoveYaw_GetResult_Response_type_support_ids_t _MoveYaw_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_msgs, action, MoveYaw_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_msgs, action, MoveYaw_GetResult_Response)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_GetResult_Response__get_type_hash,
  &maze_msgs__action__MoveYaw_GetResult_Response__get_type_description,
  &maze_msgs__action__MoveYaw_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_msgs, action, MoveYaw_GetResult_Response)() {
  return &::maze_msgs::action::rosidl_typesupport_c::MoveYaw_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__type_support.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveYaw_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_GetResult_Event_type_support_ids_t;

static const _MoveYaw_GetResult_Event_type_support_ids_t _MoveYaw_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_msgs, action, MoveYaw_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_msgs, action, MoveYaw_GetResult_Event)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_GetResult_Event__get_type_hash,
  &maze_msgs__action__MoveYaw_GetResult_Event__get_type_description,
  &maze_msgs__action__MoveYaw_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_msgs, action, MoveYaw_GetResult_Event)() {
  return &::maze_msgs::action::rosidl_typesupport_c::MoveYaw_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _MoveYaw_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_GetResult_type_support_ids_t;

static const _MoveYaw_GetResult_type_support_ids_t _MoveYaw_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_msgs, action, MoveYaw_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_msgs, action, MoveYaw_GetResult)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &MoveYaw_GetResult_Request_message_type_support_handle,
  &MoveYaw_GetResult_Response_message_type_support_handle,
  &MoveYaw_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    maze_msgs,
    action,
    MoveYaw_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    maze_msgs,
    action,
    MoveYaw_GetResult
  ),
  &maze_msgs__action__MoveYaw_GetResult__get_type_hash,
  &maze_msgs__action__MoveYaw_GetResult__get_type_description,
  &maze_msgs__action__MoveYaw_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, maze_msgs, action, MoveYaw_GetResult)() {
  return &::maze_msgs::action::rosidl_typesupport_c::MoveYaw_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__struct.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__type_support.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace maze_msgs
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _MoveYaw_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MoveYaw_FeedbackMessage_type_support_ids_t;

static const _MoveYaw_FeedbackMessage_type_support_ids_t _MoveYaw_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, maze_msgs, action, MoveYaw_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, maze_msgs, action, MoveYaw_FeedbackMessage)),
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
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MoveYaw_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &maze_msgs__action__MoveYaw_FeedbackMessage__get_type_hash,
  &maze_msgs__action__MoveYaw_FeedbackMessage__get_type_description,
  &maze_msgs__action__MoveYaw_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace maze_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, maze_msgs, action, MoveYaw_FeedbackMessage)() {
  return &::maze_msgs::action::rosidl_typesupport_c::MoveYaw_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "maze_msgs/action/move_yaw.h"
// already included above
// #include "maze_msgs/action/detail/move_yaw__type_support.h"

static rosidl_action_type_support_t _maze_msgs__action__MoveYaw__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &maze_msgs__action__MoveYaw__get_type_hash,
  &maze_msgs__action__MoveYaw__get_type_description,
  &maze_msgs__action__MoveYaw__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, maze_msgs, action, MoveYaw)()
{
  // Thread-safe by always writing the same values to the static struct
  _maze_msgs__action__MoveYaw__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, maze_msgs, action, MoveYaw_SendGoal)();
  _maze_msgs__action__MoveYaw__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, maze_msgs, action, MoveYaw_GetResult)();
  _maze_msgs__action__MoveYaw__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _maze_msgs__action__MoveYaw__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, maze_msgs, action, MoveYaw_FeedbackMessage)();
  _maze_msgs__action__MoveYaw__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_maze_msgs__action__MoveYaw__typesupport_c;
}

#ifdef __cplusplus
}
#endif
