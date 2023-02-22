# $NetBSD$

PREMAKE_VERSION=	5.0.0
DISTNAME=		premake-${PREMAKE_VERSION}-beta2-src
PKGNAME=		premake-${PREMAKE_VERSION}
CATEGORIES=		devel
MASTER_SITES=		${MASTER_SITE_GITHUB:=premake/}
GITHUB_PROJECT=		premake-core
GITHUB_RELEASE=		v${PREMAKE_VERSION}-beta2
EXTRACT_SUFX=		.zip

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		https://premake.github.io/
COMMENT=		Build script generator
LICENSE=		modified-bsd

USE_TOOLS+=		gmake
WRKSRC=			${WRKDIR}/premake-${PREMAKE_VERSION}-beta2-src

BUILDLINK_TRANSFORM+=	opt:-ldl:${BUILDLINK_LDADD.dl:M*}

BUILD_DIRS+=		build/gmake2.unix

INSTALLATION_DIRS=	bin

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/release/premake5 \
		${DESTDIR}${PREFIX}/bin/premake

.include "../../devel/libuuid/buildlink3.mk"
.include "../../mk/dlopen.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
