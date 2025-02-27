// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from aerobot_interfaces:msg\EscMsg.idl
// generated code does not contain a copyright notice

#ifndef AEROBOT_INTERFACES__MSG__DETAIL__ESC_MSG__FUNCTIONS_H_
#define AEROBOT_INTERFACES__MSG__DETAIL__ESC_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "aerobot_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "aerobot_interfaces/msg/detail/esc_msg__struct.h"

/// Initialize msg/EscMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * aerobot_interfaces__msg__EscMsg
 * )) before or use
 * aerobot_interfaces__msg__EscMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__msg__EscMsg__init(aerobot_interfaces__msg__EscMsg * msg);

/// Finalize msg/EscMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
void
aerobot_interfaces__msg__EscMsg__fini(aerobot_interfaces__msg__EscMsg * msg);

/// Create msg/EscMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * aerobot_interfaces__msg__EscMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
aerobot_interfaces__msg__EscMsg *
aerobot_interfaces__msg__EscMsg__create();

/// Destroy msg/EscMsg message.
/**
 * It calls
 * aerobot_interfaces__msg__EscMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
void
aerobot_interfaces__msg__EscMsg__destroy(aerobot_interfaces__msg__EscMsg * msg);

/// Check for msg/EscMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__msg__EscMsg__are_equal(const aerobot_interfaces__msg__EscMsg * lhs, const aerobot_interfaces__msg__EscMsg * rhs);

/// Copy a msg/EscMsg message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__msg__EscMsg__copy(
  const aerobot_interfaces__msg__EscMsg * input,
  aerobot_interfaces__msg__EscMsg * output);

/// Initialize array of msg/EscMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * aerobot_interfaces__msg__EscMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__msg__EscMsg__Sequence__init(aerobot_interfaces__msg__EscMsg__Sequence * array, size_t size);

/// Finalize array of msg/EscMsg messages.
/**
 * It calls
 * aerobot_interfaces__msg__EscMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
void
aerobot_interfaces__msg__EscMsg__Sequence__fini(aerobot_interfaces__msg__EscMsg__Sequence * array);

/// Create array of msg/EscMsg messages.
/**
 * It allocates the memory for the array and calls
 * aerobot_interfaces__msg__EscMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
aerobot_interfaces__msg__EscMsg__Sequence *
aerobot_interfaces__msg__EscMsg__Sequence__create(size_t size);

/// Destroy array of msg/EscMsg messages.
/**
 * It calls
 * aerobot_interfaces__msg__EscMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
void
aerobot_interfaces__msg__EscMsg__Sequence__destroy(aerobot_interfaces__msg__EscMsg__Sequence * array);

/// Check for msg/EscMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__msg__EscMsg__Sequence__are_equal(const aerobot_interfaces__msg__EscMsg__Sequence * lhs, const aerobot_interfaces__msg__EscMsg__Sequence * rhs);

/// Copy an array of msg/EscMsg messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_aerobot_interfaces
bool
aerobot_interfaces__msg__EscMsg__Sequence__copy(
  const aerobot_interfaces__msg__EscMsg__Sequence * input,
  aerobot_interfaces__msg__EscMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AEROBOT_INTERFACES__MSG__DETAIL__ESC_MSG__FUNCTIONS_H_
