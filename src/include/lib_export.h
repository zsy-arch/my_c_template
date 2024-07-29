
#ifndef LIB_EXPORT_H
#define LIB_EXPORT_H

#ifdef LIB_STATIC_DEFINE
#  define LIB_EXPORT
#  define LIB_NO_EXPORT
#else
#  ifndef LIB_EXPORT
#    ifdef lib_EXPORTS
        /* We are building this library */
#      define LIB_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define LIB_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef LIB_NO_EXPORT
#    define LIB_NO_EXPORT 
#  endif
#endif

#ifndef LIB_DEPRECATED
#  define LIB_DEPRECATED __declspec(deprecated)
#endif

#ifndef LIB_DEPRECATED_EXPORT
#  define LIB_DEPRECATED_EXPORT LIB_EXPORT LIB_DEPRECATED
#endif

#ifndef LIB_DEPRECATED_NO_EXPORT
#  define LIB_DEPRECATED_NO_EXPORT LIB_NO_EXPORT LIB_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef LIB_NO_DEPRECATED
#    define LIB_NO_DEPRECATED
#  endif
#endif

#endif /* LIB_EXPORT_H */
