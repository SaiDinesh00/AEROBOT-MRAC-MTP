#ifndef AEROBOT_INTERFACES__VISIBILITY_CONTROL_H_
#define AEROBOT_INTERFACES__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define AEROBOT_INTERFACES_EXPORT __attribute__ ((dllexport))
    #define AEROBOT_INTERFACES_IMPORT __attribute__ ((dllimport))
  #else
    #define AEROBOT_INTERFACES_EXPORT __declspec(dllexport)
    #define AEROBOT_INTERFACES_IMPORT __declspec(dllimport)
  #endif
  #ifdef AEROBOT_INTERFACES_BUILDING_LIBRARY
    #define AEROBOT_INTERFACES_PUBLIC AEROBOT_INTERFACES_EXPORT
  #else
    #define AEROBOT_INTERFACES_PUBLIC AEROBOT_INTERFACES_IMPORT
  #endif
  #define AEROBOT_INTERFACES_PUBLIC_TYPE AEROBOT_INTERFACES_PUBLIC
  #define AEROBOT_INTERFACES_LOCAL
#else
  #define AEROBOT_INTERFACES_EXPORT __attribute__ ((visibility("default")))
  #define AEROBOT_INTERFACES_IMPORT
  #if __GNUC__ >= 4
    #define AEROBOT_INTERFACES_PUBLIC __attribute__ ((visibility("default")))
    #define AEROBOT_INTERFACES_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define AEROBOT_INTERFACES_PUBLIC
    #define AEROBOT_INTERFACES_LOCAL
  #endif
  #define AEROBOT_INTERFACES_PUBLIC_TYPE
#endif
#endif  // AEROBOT_INTERFACES__VISIBILITY_CONTROL_H_
// Generated 13-Jun-2024 15:46:24
 