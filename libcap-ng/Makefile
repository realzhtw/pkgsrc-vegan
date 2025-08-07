# $NetBSD: Makefile,v 1.31 2025/03/30 10:31:58 adam Exp $

DISTNAME=	libcap-ng-0.8.5
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_GITHUB:=stevegrubb/}
GITHUB_PROJECT=	libcap-ng
GITHUB_TAG=	v${PKGVERSION_NOREV}

MAINTAINER=	abu.maryam@msafa.org
HOMEPAGE=	https://github.com/stevegrubb/libcap-ng
COMMENT=	POSIX capabilities library
LICENSE=	gnu-lgpl-v2.1

USE_TOOLS+=	autoconf automake
GNU_CONFIGURE=	yes

pre-configure:
	${RUN} cd ${WRKSRC} && ${SH} ./autogen.sh

.include "../../mk/bsd.prefs.mk"
.include "../../mk/bsd.pkg.mk"
