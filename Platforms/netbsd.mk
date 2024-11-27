# $Id$

include $(TOPDIR)/Platforms/generic.mk

CFLAGS += -I /usr/pkg/include -I /usr/X11R7/include
LDFLAGS += -L /usr/pkg/lib -L /usr/X11R7/lib -Wl,-R/usr/pkg/lib -Wl,-R/usr/X11R7/lib
