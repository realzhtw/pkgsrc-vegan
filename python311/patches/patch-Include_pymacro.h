$NetBSD$

--- Include/pymacro.h.orig	2023-02-07 13:37:51.000000000 +0000
+++ Include/pymacro.h
@@ -6,7 +6,7 @@
 // the static_assert() macro. Define the static_assert() macro in Python until
 // <sys/cdefs.h> suports C11:
 // https://bugs.freebsd.org/bugzilla/show_bug.cgi?id=255290
-#if defined(__FreeBSD__) && !defined(static_assert)
+#if (defined(__FreeBSD__) || defined(__DragonFly__)) && !defined(static_assert)
 #  define static_assert _Static_assert
 #endif
 
