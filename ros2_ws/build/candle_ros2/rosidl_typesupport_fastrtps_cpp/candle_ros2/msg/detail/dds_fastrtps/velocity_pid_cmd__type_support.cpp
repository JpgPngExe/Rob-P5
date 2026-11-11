// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from candle_ros2:msg/VelocityPidCmd.idl
// generated code does not contain a copyright notice
#include "candle_ros2/msg/detail/velocity_pid_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "candle_ros2/msg/detail/velocity_pid_cmd__functions.h"
#include "candle_ros2/msg/detail/velocity_pid_cmd__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace candle_ros2
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const candle_ros2::msg::Pid &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  candle_ros2::msg::Pid &);
size_t get_serialized_size(
  const candle_ros2::msg::Pid &,
  size_t current_alignment);
size_t
max_serialized_size_Pid(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const candle_ros2::msg::Pid &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const candle_ros2::msg::Pid &,
  size_t current_alignment);
size_t
max_serialized_size_key_Pid(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace candle_ros2


namespace candle_ros2
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_candle_ros2
cdr_serialize(
  const candle_ros2::msg::VelocityPidCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: device_ids
  {
    cdr << ros_message.device_ids;
  }

  // Member: velocity_pid
  {
    size_t size = ros_message.velocity_pid.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      candle_ros2::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.velocity_pid[i],
        cdr);
    }
  }

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_candle_ros2
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  candle_ros2::msg::VelocityPidCmd & ros_message)
{
  // Member: device_ids
  {
    cdr >> ros_message.device_ids;
  }

  // Member: velocity_pid
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    ros_message.velocity_pid.resize(size);
    for (size_t i = 0; i < size; i++) {
      candle_ros2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.velocity_pid[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_candle_ros2
get_serialized_size(
  const candle_ros2::msg::VelocityPidCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: device_ids
  {
    size_t array_size = ros_message.device_ids.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.device_ids[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: velocity_pid
  {
    size_t array_size = ros_message.velocity_pid.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        candle_ros2::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.velocity_pid[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_candle_ros2
max_serialized_size_VelocityPidCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: device_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: velocity_pid
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        candle_ros2::msg::typesupport_fastrtps_cpp::max_serialized_size_Pid(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = candle_ros2::msg::VelocityPidCmd;
    is_plain =
      (
      offsetof(DataType, velocity_pid) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_candle_ros2
cdr_serialize_key(
  const candle_ros2::msg::VelocityPidCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: device_ids
  {
    cdr << ros_message.device_ids;
  }

  // Member: velocity_pid
  {
    size_t size = ros_message.velocity_pid.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      candle_ros2::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
        ros_message.velocity_pid[i],
        cdr);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_candle_ros2
get_serialized_size_key(
  const candle_ros2::msg::VelocityPidCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: device_ids
  {
    size_t array_size = ros_message.device_ids.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.device_ids[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: velocity_pid
  {
    size_t array_size = ros_message.velocity_pid.size();
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        candle_ros2::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
        ros_message.velocity_pid[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_candle_ros2
max_serialized_size_key_VelocityPidCmd(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: device_ids
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: velocity_pid
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        candle_ros2::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Pid(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = candle_ros2::msg::VelocityPidCmd;
    is_plain =
      (
      offsetof(DataType, velocity_pid) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _VelocityPidCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const candle_ros2::msg::VelocityPidCmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VelocityPidCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<candle_ros2::msg::VelocityPidCmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VelocityPidCmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const candle_ros2::msg::VelocityPidCmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VelocityPidCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VelocityPidCmd(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VelocityPidCmd__callbacks = {
  "candle_ros2::msg",
  "VelocityPidCmd",
  _VelocityPidCmd__cdr_serialize,
  _VelocityPidCmd__cdr_deserialize,
  _VelocityPidCmd__get_serialized_size,
  _VelocityPidCmd__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _VelocityPidCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VelocityPidCmd__callbacks,
  get_message_typesupport_handle_function,
  &candle_ros2__msg__VelocityPidCmd__get_type_hash,
  &candle_ros2__msg__VelocityPidCmd__get_type_description,
  &candle_ros2__msg__VelocityPidCmd__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace candle_ros2

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_candle_ros2
const rosidl_message_type_support_t *
get_message_type_support_handle<candle_ros2::msg::VelocityPidCmd>()
{
  return &candle_ros2::msg::typesupport_fastrtps_cpp::_VelocityPidCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, candle_ros2, msg, VelocityPidCmd)() {
  return &candle_ros2::msg::typesupport_fastrtps_cpp::_VelocityPidCmd__handle;
}

#ifdef __cplusplus
}
#endif
