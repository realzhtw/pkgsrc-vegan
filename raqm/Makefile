# $NetBSD$

GITHUB_PROJECT=	libraqm
DISTNAME=	raqm-0.10.0
CATEGORIES=	graphics
MASTER_SITES=	${MASTER_SITE_GITHUB:=HOST-Oman/}
GITHUB_RELEASE=	v0.10.0
DIST_SUBDIR=	${GITHUB_PROJECT}
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://github.com/HOST-Oman/libraqm/
COMMENT=	Library for complex text layout
LICENSE=	mit

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	gmake pkg-config

PKGCONFIG_OVERRIDE+=	raqm.pc.in

.include "../../converters/fribidi/buildlink3.mk"
.include "../../fonts/harfbuzz/buildlink3.mk"
.include "../../graphics/freetype2/buildlink3.mk"
.include "../../devel/meson/build.mk"
.include "../../mk/bsd.pkg.mk"
