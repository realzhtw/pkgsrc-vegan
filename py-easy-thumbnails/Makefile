# $NetBSD: Makefile,v 1.4 2022/01/04 20:55:24 wiz Exp $

DISTNAME=	easy-thumbnails-2.8.5
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	${MASTER_SITE_PYPI:=e/easy-thumbnails/}

MAINTAINER=	adam@NetBSD.org
HOMEPAGE=	https://github.com/SmileyChris/easy-thumbnails
COMMENT=	Easy thumbnails for Django
LICENSE=	modified-bsd

PREV_PKGPATH=	www/py-djangoeasy-thumbnails

DEPENDS+=	${PYPKGPREFIX}-django>=1.11:../../www/py-django
DEPENDS+=	${PYPKGPREFIX}-reportlab:../../print/py-reportlab
DEPENDS+=	${PYPKGPREFIX}-svglib:../../vegan/py-svglib

USE_LANGUAGES=	# none

.include "../../lang/python/egg.mk"
.include "../../lang/python/versioned_dependencies.mk"
.include "../../mk/bsd.pkg.mk"
