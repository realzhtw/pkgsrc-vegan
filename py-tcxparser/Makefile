# $NetBSD$

DISTNAME=       python-tcxparser-2.3.0
PKGNAME=        ${PYPKGPREFIX}-${DISTNAME:S/python-//}
CATEGORIES=     textproc
MASTER_SITES=   ${MASTER_SITE_PYPI:=p/python-tcxparser/}

MAINTAINER=	root@zta.lk
HOMEPAGE=	https://github.com/vkurup/python-tcxparser
COMMENT=	Minimal parser for Garmin's TCX file format.
LICENSE=	mit

DEPENDS+=	${PYPKGPREFIX}-lxml>=5.1.0:../../textproc/py-lxml

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
