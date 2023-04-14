# $NetBSD$

DISTNAME=	svglib-1.5.1
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	graphics
MASTER_SITES=	${MASTER_SITE_PYPI:=s/svglib/}

MAINTAINER=	root@zta.lk
HOMEPAGE=	https://github.com/deeplook/svglib
COMMENT=	Library for reading SVG files and converting them to other formats
LICENSE=	lgpl-v3

USE_LANGUAGES=	# none

DEPENDS+=	${PYPKGPREFIX}-cssselect2>=0.5.0:../../textproc/py-cssselect2

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
