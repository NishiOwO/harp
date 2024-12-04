# $Id$

include $(TOPDIR)/Platform/generic.mk

GUI = gdi

AR = i686-w64-mingw32-ar
CC = i686-w64-mingw32-gcc

CFALGS += -I $(TOPDIR)/Contrib/OpenSSL/include
LDFLAGS += -L $(TOPDIR)/Contrib/OpenSSL/lib32
LIBS = -lgdi32 -lwsock32 -lssl -lcrypto

EXEC = .exe
