# $NetBSD: Makefile,v 1.23 2020/02/19 19:07:18 adam Exp $

DISTNAME=	buildbot-${BBVERSION}
CATEGORIES=	devel net python
MASTER_SITES=	${MASTER_SITE_PYPI:=b/buildbot/}

COMMENT=	Continuous integration system

DEPENDS+=	${PYPKGPREFIX}-JWT-[0-9]*:../../textproc/py-JWT
DEPENDS+=	${PYPKGPREFIX}-autobahn>=0.16.0:../../www/py-autobahn
DEPENDS+=	${PYPKGPREFIX}-dateutil>=1.5:../../time/py-dateutil
DEPENDS+=	${PYPKGPREFIX}-jinja2>=2.1:../../textproc/py-jinja2
DEPENDS+=	${PYPKGPREFIX}-setuptools>=8.0:../../devel/py-setuptools
#DEPENDS+=	${PYPKGPREFIX}-sqlalchemy>=1.3.0:../../databases/py-sqlalchemy
DEPENDS+=	${PYPKGPREFIX}-twisted>=18.7.0:../../net/py-twisted
DEPENDS+=	${PYPKGPREFIX}-txaio>=2.2.2:../../devel/py-txaio
DEPENDS+=	${PYPKGPREFIX}-zope.interface>=4.1.1:../../devel/py-zope.interface
DEPENDS+=	${PYPKGPREFIX}-yaml>=5.3.1:../../textproc/py-yaml
DEPENDS+=	${PYPKGPREFIX}-alembic>=1.6.0:../../databases/py-alembic
DEPENDS+=	${PYPKGPREFIX}-msgpack>=0.6.0:../../devel/py-msgpack
TEST_DEPENDS+=	${PYPKGPREFIX}-boto3-[0-9]*:../../net/py-boto3
TEST_DEPENDS+=	${PYPKGPREFIX}-jade-[0-9]*:../../textproc/py-jade
TEST_DEPENDS+=	${PYPKGPREFIX}-lz4-[0-9]*:../../archivers/py-lz4
TEST_DEPENDS+=	${PYPKGPREFIX}-mock>=2.0.0:../../devel/py-mock
TEST_DEPENDS+=	${PYPKGPREFIX}-moto-[0-9]*:../../net/py-moto
TEST_DEPENDS+=	${PYPKGPREFIX}-parameterized-[0-9]*:../../devel/py-parameterized
TEST_DEPENDS+=	${PYPKGPREFIX}-treq-[0-9]*:../../devel/py-treq
TEST_DEPENDS+=	${PYPKGPREFIX}-txrequests-[0-9]*:../../devel/py-txrequests

USE_LANGUAGES=	# none

post-install:
	cd ${DESTDIR}${PREFIX}/bin && \
	${MV} buildbot buildbot-${PYVERSSUFFIX} && \
	${MV} buildbot_windows_service buildbot_windows_service-${PYVERSSUFFIX} || ${TRUE}

.include "Makefile.common"
