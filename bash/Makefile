# $NetBSD: Makefile,v 1.109 2022/12/14 16:48:41 kre Exp $

BASH_VERSION=		5.2
BASH_PATCHLEVEL=	26
PKGREVISION=		1

DISTNAME=	bash-${BASH_VERSION}
PKGNAME=	bash-${BASH_VERSION}.${BASH_PATCHLEVEL}
CATEGORIES=	shells
MASTER_SITES=	${MASTER_SITE_GNU:=bash/}

PATCH_SITES=	${MASTER_SITES:=bash-5.2-patches/}
PATCHFILES+=	bash52-001 bash52-002 bash52-003 bash52-004 bash52-005
PATCHFILES+=	bash52-006 bash52-007 bash52-008 bash52-009 bash52-010
PATCHFILES+=	bash52-011 bash52-012 bash52-013 bash52-014 bash52-015
PATCHFILES+=	bash52-016 bash52-017 bash52-018 bash52-019 bash52-020
PATCHFILES+=	bash52-021 bash52-022 bash52-023 bash52-024 bash52-025
PATCHFILES+=	bash52-026

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://www.gnu.org/software/bash/bash.html
COMMENT=	The GNU Bourne Again Shell
LICENSE=	gnu-gpl-v3

USE_TOOLS+=		makeinfo bison
TEXINFO_REQD=		4.1
GNU_CONFIGURE=		yes
MAKE_ENV+=		INSTALL_SCRIPT=${INSTALL_SCRIPT:Q}
CONFIGURE_ARGS=		LOCAL_LDFLAGS=${EXPORT_SYMBOLS_LDFLAGS:M*:Q}
CPPFLAGS+=		-DDEFAULT_PATH_VALUE="\"/sbin:/usr/sbin:/usr/bin:/bin:${PREFIX}/sbin:${PREFIX}/bin:/usr/local/sbin:/usr/local/bin\""
TEST_TARGET=		test

PKGCONFIG_OVERRIDE=	support/bash.pc.in

INFO_FILES=		YES # PLIST
PKG_SHELL=		bin/bash
INSTALLATION_DIRS=	${PKGMANDIR}/man1

CONFIGURE_ARGS+=	--enable-alias
CONFIGURE_ARGS+=	--enable-array-variables
CONFIGURE_ARGS+=	--enable-brace-expansion
CONFIGURE_ARGS+=	--enable-cond-regexp
CONFIGURE_ARGS+=	--enable-debugger
CONFIGURE_ARGS+=	--enable-directory-stack
CONFIGURE_ARGS+=	--enable-dparen-arithmetic
CONFIGURE_ARGS+=	--enable-extended-glob
CONFIGURE_ARGS+=	--enable-function-import
CONFIGURE_ARGS+=	--enable-help-builtin
CONFIGURE_ARGS+=	--enable-history
CONFIGURE_ARGS+=	--enable-process-substitution
CONFIGURE_ARGS+=	--enable-progcomp
CONFIGURE_ARGS+=	--enable-readline

.include "../../mk/bsd.prefs.mk"
.include "options.mk"

# Minix lacks setpgid() which is needed for job control.
.if ${OPSYS} == "Minix"
CONFIGURE_ARGS+=	--disable-job-control
.else
CONFIGURE_ARGS+=	--enable-job-control
.endif

# bash malloc() is broken on Minix and musl libc
.if ${OPSYS} == "Minix" || (${OPSYS} == "Linux" && empty(GLIBC_VERSION))
CONFIGURE_ARGS+=	--with-bash-malloc=no
.endif

# Use "readline" package on Darwin to avoid link erros.
.if ${OPSYS} == "Darwin"
CONFIGURE_ARGS+=		--with-installed-readline

BUILDLINK_API_DEPENDS.readline+=	readline>=7.0
.include "../../devel/readline/buildlink3.mk"
.endif

.if ${USE_CROSS_COMPILE:U:tl} == yes && ${OPSYS} == "NetBSD"
CONFIGURE_ENV+=		CC_FOR_BUILD=${NATIVE_CC:Q}
CONFIGURE_ENV+=		ac_cv_c_long_long=yes
CONFIGURE_ENV+=		ac_cv_c_long_double=yes
CONFIGURE_ENV+=		bash_cv_type_rlimit=yes
CONFIGURE_ENV+=		bash_cv_getcwd_malloc=yes
CONFIGURE_ENV+=		bash_cv_func_sigsetjmp=yes
CONFIGURE_ENV+=		bash_cv_printf_a_format=yes
CONFIGURE_ENV+=		bash_cv_job_control_missing=present
CONFIGURE_ENV+=		bash_cv_sys_named_pipes=present
CONFIGURE_ENV+=		bash_cv_unusable_rtsigs=no
CONFIGURE_ENV+=		bash_cv_func_ctype_nonascii=yes
CONFIGURE_ENV+=		bash_cv_wexitstatus_offset=8
.endif

pre-configure:
	${RM} -f ${WRKSRC}/y.tab.c

post-install:
	${INSTALL_MAN} ${WRKSRC}/doc/bash.1 ${DESTDIR}${PREFIX}/${PKGMANDIR}/man1
	${INSTALL_MAN} ${WRKSRC}/doc/bashbug.1 ${DESTDIR}${PREFIX}/${PKGMANDIR}/man1

.include "../../mk/termcap.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
