# $NetBSD$

DISTNAME=	jira-3.5.0
PKGNAME=	${PYPKGPREFIX}-${DISTNAME}
CATEGORIES=	pkgtools
MASTER_SITES=	${MASTER_SITE_PYPI:=j/jira/}

MAINTAINER=	root@zta.lk
HOMEPAGE=	https://github.com/pycontribs/jira
COMMENT=	Library to use the Jira REST API
LICENSE=	BSD-2

USE_LANGUAGES=	# none

DEPENDS+=	${PYPKGPREFIX}-requests-toolbelt:../../devel/py-requests-toolbelt
DEPENDS+=	${PYPKGPREFIX}-requests-oauthlib>=1.1.0:../../security/py-requests-oauthlib
DEPENDS+=	${PYPKGPREFIX}-requests>=2.10.0:../../devel/py-requests
DEPENDS+=	${PYPKGPREFIX}-typing-extensions>=3.7.4.2:../../devel/py-typing-extensions
DEPENDS+=	${PYPKGPREFIX}-keyring:../../security/py-keyring

#        defusedxml
#        packaging

post-install:
	cd ${DESTDIR}${PREFIX}/bin && \
	${MV} jirashell jirashell-${PYVERSSUFFIX}

.include "../../lang/python/wheel.mk"
.include "../../mk/bsd.pkg.mk"
