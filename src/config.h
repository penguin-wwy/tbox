#ifndef TB_CONFIG_H
#define TB_CONFIG_H

// arch
#define TB_CONFIG_ARCH_x86
//#define TB_CONFIG_ARCH_ARM
//#define TB_CONFIG_ARCH_MIPS
//#define TB_CONFIG_ARCH_SPARC
//#define TB_CONFIG_ARCH_PPC
//#define TB_CONFIG_ARCH_SH4

// os
#define TB_CONFIG_OS_WINDOWS

// cpu
//#define TB_CONFIG_CPU_BIGENDIAN
//#define TB_CONFIG_CPU_HAS_CONDITIONAL_INSTR

// compiler
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_INLINE
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_INLINE_ASM
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_VARARG_MACRO
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_BUILTIN_FUNCTIONS
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_ANONYMOUS_UNION_STRUCT
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_FUNC_AND_VOIDPTR_CAST
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_SPECIFIC_MEMBER_INITIAL
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_ANONYMOUS_STRUCT_DEFINATION
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_ANONYMOUS_ARRAY_DEFINATION
//#define TB_CONFIG_COMPILER_NOT_SUPPORT_DYNAMIC_ARRAY_DEFINATION

// assembler
#if defined(_MSC_VER)
# 	define TB_CONFIG_ASSEMBLER_MASM
#elif defined(__GNUC__)
# 	define TB_CONFIG_ASSEMBLER_GAS
#endif

// keyword
#define TB_CONFIG_KEYWORD_INLINE		__inline
#define TB_CONFIG_KEYWORD_REGISTER		register
#define TB_CONFIG_KEYWORD_ASM 			__asm__
#define TB_CONFIG_KEYWORD_FUNC			__FUNCTION__
#define TB_CONFIG_KEYWORD_LINE			__LINE__
#define TB_CONFIG_KEYWORD_FILE			__FILE__

// type
#define TB_CONFIG_TYPE_FLOAT
#define TB_CONFIG_TYPE_SCALAR_IS_FIXED

// optimization
#define TB_CONFIG_OPTI_SSE2_ENABLE

// binary
//#define TB_CONFIG_BINARY_SMALL

// memory
#define TB_CONFIG_MEMORY_MODE_SMALL
#define TB_CONFIG_MEMORY_POOL_ENABLE
//#define TB_CONFIG_MEMORY_UNALIGNED_ACCESS_ENABLE

// event
//#define TB_CONFIG_EVENT_HAVE_POSIX
//#define TB_CONFIG_EVENT_HAVE_PTHREAD
//#define TB_CONFIG_EVENT_HAVE_SYSTEMV
#define TB_CONFIG_EVENT_HAVE_WAITO

// aio
#define TB_CONFIG_AIO_HAVE_SELECT
//#define TB_CONFIG_AIO_HAVE_EPOLL
//#define TB_CONFIG_AIO_HAVE_POLL
//#define TB_CONFIG_AIO_HAVE_PORT
//#define TB_CONFIG_AIO_HAVE_KQUEUE
#define TB_CONFIG_AIO_HAVE_WAITO
#define TB_CONFIG_AIO_HAVE_IOCP

// libs
#define TB_CONFIG_LIBS_ZLIB

// libc
#define TB_CONFIG_LIBC_HAVE_MEMCPY
#define TB_CONFIG_LIBC_HAVE_MEMSET
#define TB_CONFIG_LIBC_HAVE_MEMMOV
#define TB_CONFIG_LIBC_HAVE_MEMCMP

#define TB_CONFIG_LIBC_HAVE_STRCAT
#define TB_CONFIG_LIBC_HAVE_STRNCAT

#define TB_CONFIG_LIBC_HAVE_STRCPY
#define TB_CONFIG_LIBC_HAVE_STRNCPY

#define TB_CONFIG_LIBC_HAVE_STRLEN 
#define TB_CONFIG_LIBC_HAVE_STRNLEN

#define TB_CONFIG_LIBC_HAVE_STRSTR
//#define TB_CONFIG_LIBC_HAVE_STRISTR

#define TB_CONFIG_LIBC_HAVE_STRCMP
//#define TB_CONFIG_LIBC_HAVE_STRICMP
//#define TB_CONFIG_LIBC_HAVE_STRNCMP
//#define TB_CONFIG_LIBC_HAVE_STRNICMP



#endif
// config
#ifndef tbox_AUTO_CONFIG_H
#define tbox_AUTO_CONFIG_H
#define tbox_CONFIG_DEBUG 1
#endif
