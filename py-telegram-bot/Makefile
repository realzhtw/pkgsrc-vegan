# $NetBSD$

DISTNAME=	python-telegram-bot-20.5
PKGNAME=	${PYPKGPREFIX}-${DISTNAME:S/python-//}
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_PYPI:=p/python-telegram-bot/}

MAINTAINER=	root@zta.lk
HOMEPAGE=	https://python-telegram-bot.org/
COMMENT=	Python Telegram Bot library
LICENSE=	gnu-lgpl-v3

DEPENDS+=	${PYPKGPREFIX}-cryptography-[0-9]*:../../security/py-cryptography
DEPENDS+=	${PYPKGPREFIX}-decorator>=4.4.0:../../devel/py-decorator
DEPENDS+=	${PYPKGPREFIX}-future>=0.16.0:../../devel/py-future
DEPENDS+=	${PYPKGPREFIX}-tornado>=5.1:../../www/py-tornado
DEPENDS+=	${PYPKGPREFIX}-certifi>=2020.4.5.2:../../security/py-certifi
DEPENDS+=	${PYPKGPREFIX}-httpx>=0.24.1:../../www/py-httpx

.include "../../lang/python/egg.mk"
.include "../../mk/bsd.pkg.mk"
