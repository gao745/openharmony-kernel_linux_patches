/*
 * This header was generated from the Linux kernel headers by update_headers.py,
 * to provide necessary information from kernel to userspace, such as constants,
 * structures, and macros, and thus, contains no copyrightable information.
 */
#ifndef _XT_MULTIPORT_H
#define _XT_MULTIPORT_H
#include <linux/types.h>
enum xt_multiport_flags {
	XT_MULTIPORT_SOURCE,
	XT_MULTIPORT_DESTINATION,
	XT_MULTIPORT_EITHER
};
#define XT_MULTI_PORTS	15
struct xt_multiport {
	__u8 flags;
	__u8 count;
	__u16 ports[XT_MULTI_PORTS];
};
struct xt_multiport_v1 {
	__u8 flags;
	__u8 count;
	__u16 ports[XT_MULTI_PORTS];
	__u8 pflags[XT_MULTI_PORTS];
	__u8 invert;
};
#endif
