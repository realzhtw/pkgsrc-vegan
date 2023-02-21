# $NetBSD: Makefile,v 1.74 2020/11/19 09:35:39 schmonz Exp $

DISTNAME=		${PKGVERSION}
PKGNAME=		djbdns-1.08
CATEGORIES=		net
MASTER_SITES=		${MASTER_SITE_GITHUB:=realzhtw/djbdns/archive/}
DISTFILES=		${DISTNAME}${EXTRACT_SUFX} ${MANPAGES}

MAINTAINER=		root@zta.lk
HOMEPAGE=		https://cr.yp.to/djbdns.html
COMMENT=		Collection of secure and reliable DNS tools
LICENSE=		public-domain

MANPAGES=		djbdns-1.05-man-20031023.tar.gz
SITES.${MANPAGES}=	http://smarden.org/pape/djb/manpages/

CONFLICTS+=		djbdnscurve6-[0-9]*

#SUBST_CLASSES+=		djberrno

SUBST_CLASSES+=		etc
SUBST_STAGE.etc=	do-configure
SUBST_FILES.etc=	dns_rcrw.c
SUBST_SED.etc=		-e 's|/etc/dnsrewrite|${PKG_SYSCONFBASE}/dnsrewrite|g'
SUBST_MESSAGE.etc=	Fixing prefix.

EGDIR=			${PREFIX}/share/examples/${PKGBASE}
CPPFLAGS+=		-DPKG_SYSCONFDIR="${PKG_SYSCONFDIR}"
MAKE_DIRS+=		${PKG_SYSCONFDIR}
CONF_FILES+=		${EGDIR}/dnsroots.global ${PKG_SYSCONFDIR}/dnsroots.global
BUILD_DEFS+=		PKG_SYSCONFBASE

INSTALLATION_DIRS=	bin ${PKGMANDIR}/man1 ${PKGMANDIR}/man5 ${PKGMANDIR}/man8 share/examples/${PKGBASE}

WRKSRC=	${WRKDIR}/${PKGNAME}

post-install:
	cd ${WRKDIR}/${PKGBASE}-man; for i in 1 5 8; do		 	\
		for j in *.$$i; do ${INSTALL_MAN} $$j			\
			${DESTDIR}${PREFIX}/${PKGMANDIR}/man$$i; done	\
	done

.include "../../mk/djbware.mk"
.include "../../mk/bsd.pkg.mk"
