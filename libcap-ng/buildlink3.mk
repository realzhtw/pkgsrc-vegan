# $NetBSD$

BUILDLINK_TREE+=	libcap-ng

.if !defined(LIBCAP_NG_BUILDLINK3_MK)
LIBCAP_NG_BUILDLINK3_MK:=

BUILDLINK_API_DEPENDS.libcap-ng+=	libcap-ng>=0.8.5
BUILDLINK_PKGSRCDIR.libcap-ng?=	../../vegan/libcap-ng
.endif	# LIBCAP_NG_BUILDLINK3_MK

BUILDLINK_TREE+=	-libcap-ng
