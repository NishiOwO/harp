/* wwwconf.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
#undef AC_APPLE_UNIVERSAL_BUILD

/* Define to `char' if <sys/types.h> does not define. */
#undef BOOLEAN

/* Define this to be the prefix for cache files. */
#undef CACHE_FILE_PREFIX

/* Define to build Cyrillic version. */
#undef CYRILLIC

/* Define to the type of elements in the array set by `getgroups'. Usually
   this is either `int' or `gid_t'. */
#undef GETGROUPS_T

/* Define if getlogin_r returns an integer */
#undef GETLOGIN_R_RETURNS_INT

/* Define if getlogin_r returns a pointer */
#undef GETLOGIN_R_RETURNS_POINTER

/* Define this if you have the external variable 'altzone' */
#undef HAVE_ALTZONE

/* Define to 1 if you have the <arpa/inet.h> header file. */
#ifdef __MINGW32__
#undef HAVE_ARPA_INET_H
#else
#define HAVE_ARPA_INET_H
#endif

/* Define to 1 if you have the <bsdtime.h> header file. */
#undef HAVE_BSDTIME_H

/* Define to 1 if you have the <bsdtypes.h> header file. */
#undef HAVE_BSDTYPES_H

/* Define to 1 if you have the `chdir' function. */
#define HAVE_CHDIR

/* Define to use the two-argument variant of ctime_r */
#undef HAVE_CTIME_R_2

/* Define to use the three-argument variant of ctime_r */
#undef HAVE_CTIME_R_3

/* Define to 1 if you have the <ctype.h> header file. */
#define HAVE_CTYPE_H

/* Define to 1 if you have the <cursesX.h> header file. */
#undef HAVE_CURSESX_H

/* Define to 1 if you have the <curses.h> header file. */
#undef HAVE_CURSES_H

/* Define this if you have the external variable 'daylight' */
#undef HAVE_DAYLIGHT

/* Define to 1 if you have the declaration of `tzname', and to 0 if you don't.
   */
#undef HAVE_DECL_TZNAME

/* Define to 1 if you have the <direct.h> header file. */
#undef HAVE_DIRECT_H

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H

/* Define this if directory entries have inodes. */
#undef HAVE_DIRENT_INO

/* Define to 1 if you have the `dirfd' function. */
#undef HAVE_DIRFD

/* Define to 1 if you have the <dir.h> header file. */
#undef HAVE_DIR_H

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H

/* Define to 1 if you have the <dnetdb.h> header file. */
#undef HAVE_DNETDB_H

/* Define to 1 if you have the <dn.h> header file. */
#undef HAVE_DN_H

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
#undef HAVE_DOPRNT

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H

/* Define to 1 if you have the `fcntl' function. */
#ifdef __MINGW32__
#undef HAVE_FCNTL
#else
#define HAVE_FCNTL
#endif

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H

/* Define to 1 if you have the `fpathconf' function. */
#undef HAVE_FPATHCONF

/* Define to 1 if you have the `getcwd' function. */
#define HAVE_GETCWD

/* Define to 1 if you have the `getdomainname' function. */
#undef HAVE_GETDOMAINNAME

/* Define to use the five-argument variant of gethostbyaddr_r */
#undef HAVE_GETHOSTBYADDR_R_5

/* Define to use the seven-argument variant of gethostbyaddr_r */
#undef HAVE_GETHOSTBYADDR_R_7

/* Define to use the eight-argument variant of gethostbyaddr_r */
#undef HAVE_GETHOSTBYADDR_R_8

/* Define to use the three-argument variant of gethostbyname_r */
#undef HAVE_GETHOSTBYNAME_R_3

/* Define to use the five-argument variant of gethostbyname_r */
#undef HAVE_GETHOSTBYNAME_R_5

/* Define to use the six-argument variant of gethostbyname_r */
#undef HAVE_GETHOSTBYNAME_R_6

/* Define to 1 if you have the `gethostname' function. */
#undef HAVE_GETHOSTNAME

/* Define to 1 if you have the `getlogin' function. */
#undef HAVE_GETLOGIN

/* Define to 1 if you have the `getpass' function. */
#undef HAVE_GETPASS

/* Define to 1 if you have the `getpid' function. */
#undef HAVE_GETPID

/* Define to 1 if you have the `getsockopt' function. */
#undef HAVE_GETSOCKOPT

/* Define to 1 if you have the `gettimeofday' function. */
#undef HAVE_GETTIMEOFDAY

/* Define to 1 if you have the `getwd' function. */
#undef HAVE_GETWD

/* Define to 1 if you have the <grp.h> header file. */
#undef HAVE_GRP_H

/* Define to 1 if you have the <inet.h> header file. */
#undef HAVE_INET_H

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H

/* Define to 1 if you have the <in.h> header file. */
#undef HAVE_IN_H

/* Define to 1 if you have the `ioctl' function. */
#undef HAVE_IOCTL

/* Define to 1 if you have the <libc.h> header file. */
#undef HAVE_LIBC_H

/* Define to 1 if you have the `dl' library (-ldl). */
#undef HAVE_LIBDL

/* Define to 1 if you have the `expat' library (-lexpat). */
#undef HAVE_LIBEXPAT

/* Define to 1 if you have the `inet' library (-linet). */
#undef HAVE_LIBINET

/* Define to 1 if you have the `nsl' library (-lnsl). */
#undef HAVE_LIBNSL

/* Define to 1 if you have the `socket' library (-lsocket). */
#undef HAVE_LIBSOCKET

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H

/* Define to 1 if the system has the type `long double'. */
#define HAVE_LONG_DOUBLE

/* Define if size_t is of type long */
#undef HAVE_LONG_SIZE_T

/* Define if time_t is of type long */
#undef HAVE_LONG_TIME_T

/* Define to 1 if you have the <malloc.h> header file. */
#undef HAVE_MALLOC_H

/* Define to 1 if you have the <manifest.h> header file. */
#undef HAVE_MANIFEST_H

/* Define to 1 if you have the `memcpy' function. */
#define HAVE_MEMCPY

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the `mktime' function. */
#undef HAVE_MKTIME

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
#undef HAVE_NDIR_H

/* Define to 1 if you have the <netdb.h> header file. */
#ifdef __MINGW32__
#undef HAVE_NETDB_H
#else
#define HAVE_NETDB_H
#endif

/* Define to 1 if you have the <netinet/in.h> header file. */
#ifdef __MINGW32__
#undef HAVE_NETINET_IN_H
#else
#define HAVE_NETINET_IN_H
#endif

/* Define to 1 if you have the <netinet/tcp.h> header file. */
#undef HAVE_NETINET_TCP_H

/* Define to 1 if you have the <net/errno.h> header file. */
#undef HAVE_NET_ERRNO_H

/* Define to 1 if you have the `opendir' function. */
#define HAVE_OPENDIR

/* Define to 1 if you have the <pwd.h> header file. */
#undef HAVE_PWD_H

/* Define to 1 if you have the `readdir' function. */
#define HAVE_READDIR

/* Define to use the two-argument variant of readdir_r */
#undef HAVE_READDIR_R_2

/* Define to use the three-argument variant of gethostbyname_r */
#undef HAVE_READDIR_R_3

/* Define to 1 if you have the <regex.h> header file. */
#undef HAVE_REGEX_H

/* Define to 1 if you have the <resource.h> header file. */
#undef HAVE_RESOURCE_H

/* Define to 1 if you have the <rxposix.h> header file. */
#undef HAVE_RXPOSIX_H

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT

/* Define to 1 if you have the <select.h> header file. */
#undef HAVE_SELECT_H

/* Define to 1 if you have the `setsockopt' function. */
#define HAVE_SETSOCKOPT

/* Define to 1 if you have the `socket' function. */
#define HAVE_SOCKET

/* Define this if you have the external variable 'socket_errno'. */
#undef HAVE_SOCKET_ERRNO

/* Define to 1 if you have the <socket.h> header file. */
#undef HAVE_SOCKET_H

/* Define to 1 if you have the <stat.h> header file. */
#undef HAVE_STAT_H

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H

/* Define to 1 if you have the <stdefs.h> header file. */
#undef HAVE_STDEFS_H

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H

/* Define to 1 if you have the `strchr' function. */
#define HAVE_STRCHR

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR

/* Define to 1 if you have the `strftime' function. */
#define HAVE_STRFTIME

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H

/* Define to 1 if you have the `strtol' function. */
#define HAVE_STRTOL

/* Define to 1 if `tm_zone' is a member of `struct tm'. */
#undef HAVE_STRUCT_TM_TM_ZONE

/* Define to 1 if you have the `sysinfo' function. */
#undef HAVE_SYSINFO

/* Define to 1 if you have the <syslog.h> header file. */
#undef HAVE_SYSLOG_H

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_DIR_H

/* Define this if you have the external variable 'sys_errlist'. */
#undef HAVE_SYS_ERRLIST

/* Define to 1 if you have the <sys/errno.h> header file. */
#undef HAVE_SYS_ERRNO_H

/* Define to 1 if you have the <sys/fcntl.h> header file. */
#undef HAVE_SYS_FCNTL_H

/* Define to 1 if you have the <sys/file.h> header file. */
#undef HAVE_SYS_FILE_H

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#undef HAVE_SYS_IOCTL_H

/* Define to 1 if you have the <sys/ipc.h> header file. */
#undef HAVE_SYS_IPC_H

/* Define to 1 if you have the <sys/limits.h> header file. */
#undef HAVE_SYS_LIMITS_H

/* Define to 1 if you have the <sys/machine.h> header file. */
#undef HAVE_SYS_MACHINE_H

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
#undef HAVE_SYS_NDIR_H

/* Define this if you have the external variable 'sys_nerr'. */
#undef HAVE_SYS_NERR

/* Define to 1 if you have the <sys/resource.h> header file. */
#undef HAVE_SYS_RESOURCE_H

/* Define to 1 if you have the <sys/select.h> header file. */
#ifdef __MINGW32__
#undef HAVE_SYS_SELECT_H
#else
#define HAVE_SYS_SELECT_H
#endif

/* Define to 1 if you have the <sys/socket.h> header file. */
#ifdef __MINGW32__
#undef HAVE_SYS_SOCKET_H
#else
#define HAVE_SYS_SOCKET_H
#endif

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/syslog> header file. */
#undef HAVE_SYS_SYSLOG

/* Define to 1 if you have the <sys/systeminfo.h> header file. */
#undef HAVE_SYS_SYSTEMINFO_H

/* Define to 1 if you have the <sys/time.h> header file. */
#undef HAVE_SYS_TIME_H

/* Define to 1 if you have the <sys/types.h> header file. */
#ifdef __MINGW32__
#undef HAVE_SYS_TYPES_H
#else
#define HAVE_SYS_TYPES_H
#endif

/* Define to 1 if you have the <sys/unistd.h> header file. */
#undef HAVE_SYS_UNISTD_H

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#ifdef __MINGW32__
#undef HAVE_SYS_WAIT_H
#else
#define HAVE_SYS_WAIT_H
#endif

/* Define to 1 if you have the <tcp.h> header file. */
#undef HAVE_TCP_H

/* Define to 1 if you have the `tempnam' function. */
#undef HAVE_TEMPNAM

/* Define to 1 if you have the <termios.h> header file. */
#undef HAVE_TERMIOS_H

/* Define to 1 if you have the `timegm' function. */
#ifdef __MINGW32__
#define timegm _mkgmtime
#endif
#define HAVE_TIMEGM

/* Define this if you have the external variable 'timezone' */
#undef HAVE_TIMEZONE

/* Define to 1 if you have the <time.h> header file. */
#define HAVE_TIME_H

/* Define this if tm structure includes a tm_gmtoff entry. */
#undef HAVE_TM_GMTOFF

/* Define to 1 if your `struct tm' has `tm_zone'. Deprecated, use
   `HAVE_STRUCT_TM_TM_ZONE' instead. */
#undef HAVE_TM_ZONE

/* Define to 1 if you have the <types.h> header file. */
#undef HAVE_TYPES_H

/* Define to 1 if you don't have `tm_zone' but do have the external array
   `tzname'. */
#undef HAVE_TZNAME

/* Define to 1 if you have the `tzset' function. */
#undef HAVE_TZSET

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H

/* Define to 1 if you have the <unixlib.h> header file. */
#undef HAVE_UNIXLIB_H

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF

/* Define to 1 if you have the <wais.h> header file. */
#undef HAVE_WAIS_H

/* Define to 1 if you have the <wais/wais.h> header file. */
#undef HAVE_WAIS_WAIS_H

/* Define this if your ioctl understands the winsize structure. */
#undef HAVE_WINSIZE

/* Define to enable support for enabling a rules file w/o user interaction. */
#undef HT_AUTOMATIC_RULES

/* Define to enable WebDAV protocol. */
#undef HT_DAV

/* Define to enable direct WAIS access. */
#undef HT_DIRECT_WAIS

/* Define to enable expat XML parser. */
#undef HT_EXPAT

/* Define to enable extension methods. */
#undef HT_EXT

/* Define to enable MD5 for HTTP access authentication. */
#define HT_MD5

/* Define to enable MUX as HTTP transport */
#undef HT_MUX

/* Define to enable mysql access. */
#undef HT_MYSQL

/* Define to disable Nagle's algorithm */
#undef HT_NO_NAGLE

/* Define to disable HTTP/1.1 pipelining */
#undef HT_NO_PIPELINING

/* Define to enable POSIX RegEx support. */
#undef HT_POSIX_REGEX

/* Define to build using reentrant system calls. */
#undef HT_REENTRANT

/* Define to enable ssl transport. */
#define HT_SSL

/* Define to enable Zlib compression / decompression support. */
#define HT_ZLIB

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#undef LT_OBJDIR

/* Define this if sys_errlist must be declared (if it exists). */
#undef NEED_SYS_ERRLIST_DECLARED

/* Define this if sys_nerr must be declared (if it exists). */
#undef NEED_SYS_NERR_DECLARED

/* Define this if the extern timezone is negative. */
#undef NEGATIVE_TIMEZONE

/* Name of package */
#undef PACKAGE

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the home page for this package. */
#undef PACKAGE_URL

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* Define this to be the location of the resolver configuration file. */
#undef RESOLV_CONF

/* Define as the return type of signal handlers (`int' or `void'). */
#undef RETSIGTYPE

/* Define this to be the rlogin program name. */
#undef RLOGIN_PROGRAM

/* The size of `char', as computed by sizeof. */
#undef SIZEOF_CHAR

/* The size of `char *', as computed by sizeof. */
#undef SIZEOF_CHAR_P

/* The size of `int', as computed by sizeof. */
#undef SIZEOF_INT

/* The size of `long', as computed by sizeof. */
#undef SIZEOF_LONG

/* The size of `size_t', as computed by sizeof. */
#undef SIZEOF_SIZE_T

/* The size of `time_t', as computed by sizeof. */
#undef SIZEOF_TIME_T

/* Define to enable SOCKS firewall-breaching code. */
#undef SOCKS

/* Define to enable SOCKS4 firewall-breaching code. */
#undef SOCKS4

/* Define to enable SOCKS5 firewall-breaching code. */
#undef SOCKS5

/* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
#undef STAT_MACROS_BROKEN

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS

/* Define this to be the telnet program name. */
#undef TELNET_PROGRAM

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#undef TIME_WITH_SYS_TIME

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
#undef TM_IN_SYS_TIME

/* 1 */
#undef TN3270_PROGRAM

/* Version number of package */
#undef VERSION

/* Define to be the package name. */
#undef W3C_PACKAGE

/* Define to be the version. */
#undef W3C_VERSION

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif

/* Define to use internal signal handler */
#undef WWWLIB_SIG

/* Enable POSIX */
#undef _POSIX_SOURCE
#define _POSIX_

/* Define to 1 if type `char' is unsigned and you are not using gcc.  */
#ifndef __CHAR_UNSIGNED__
# undef __CHAR_UNSIGNED__
#endif

/* Define to empty if `const' does not conform to ANSI C. */
#undef const

/* Define to `int' if <sys/types.h> doesn't define. */
#undef gid_t

/* Define to `int' if <sys/types.h> does not define. */
#undef mode_t

/* Define to `int' if <sys/types.h> does not define. */
#undef pid_t

/* Define to `unsigned int' if <sys/types.h> does not define. */
#undef size_t

/* Define to `unsigned char' if <sys/types.h> does not define. */
#undef u_char

/* Define to `unsigned long' if <sys/types.h> does not define. */
#undef u_long

/* Define to `unsigned short' if <sys/types.h> does not define. */
#undef u_short

/* Define to `int' if <sys/types.h> doesn't define. */
#undef uid_t

/* What to use for unlink */
#undef unlink
