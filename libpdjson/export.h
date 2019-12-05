#pragma once

#if defined(LIBPDJSON_STATIC)         // Using static.
#  define LIBPDJSON_SYMEXPORT
#elif defined(LIBPDJSON_STATIC_BUILD) // Building static.
#  define LIBPDJSON_SYMEXPORT
#elif defined(LIBPDJSON_SHARED)       // Using shared.
#  ifdef _WIN32
#    define LIBPDJSON_SYMEXPORT __declspec(dllimport)
#  else
#    define LIBPDJSON_SYMEXPORT
#  endif
#elif defined(LIBPDJSON_SHARED_BUILD) // Building shared.
#  ifdef _WIN32
#    define LIBPDJSON_SYMEXPORT __declspec(dllexport)
#  else
#    define LIBPDJSON_SYMEXPORT
#  endif
#else
// If none of the above macros are defined, then we assume we are being used
// by some third-party build system that cannot/doesn't signal the library
// type. Note that this fallback works for both static and shared but in case
// of shared will be sub-optimal compared to having dllimport.
//
#  define LIBPDJSON_SYMEXPORT         // Using static or shared.
#endif
