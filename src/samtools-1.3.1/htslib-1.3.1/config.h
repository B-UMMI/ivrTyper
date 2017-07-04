/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in -- template for config.h.  If you use configure, this file
   provides #defines reflecting your configuration choices.  If you don't
   run configure, suitable conservative defaults will be used.

   This template file can be updated with autoheader, but do so carefully
   as autoheader adds #defines such as PACKAGE_* that we don't want.  */

/* Define if HTSlib should enable plugins. */
/* #undef ENABLE_PLUGINS */

/* Define if you have the Common Crypto library. */
/* #undef HAVE_COMMONCRYPTO */

/* Define to 1 if you have the `gmtime_r' function. */
#define HAVE_GMTIME_R 1

/* Define if you have libcrypto-style HMAC(). */
/* #undef HAVE_HMAC */

/* Define to 1 if iRODS file access is enabled. */
/* #undef HAVE_IRODS */

/* Define if libcurl file access is enabled. */
/* #undef HAVE_LIBCURL */

/* Define to 1 if you have a working `mmap' system call. */
#define HAVE_MMAP 1

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */
