$NetBSD: patch-setup.py,v 1.1 2021/01/16 09:26:26 adam Exp $

Do not install tests.

--- setup.py.orig	2021-01-16 09:14:23.000000000 +0000
+++ setup.py
@@ -44,7 +44,7 @@ setup(
     license='BSD-3-Clause',
     description='Adds attributes to Django models.',
     long_description=open('README.rst').read(),
-    packages=find_packages(),
+    packages=find_packages(exclude=['tests*']),
     include_package_data=True,
     zip_safe=False,
     install_requires=REQUIREMENTS,
