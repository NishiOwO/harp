# $Id$

include $(TOPDIR)/Platform/generic.mk

GUI = gdi

AR = i686-w64-mingw32-ar
CC = i686-w64-mingw32-gcc

CFLAGS += -I $(TOPDIR)/Contrib/OpenSSL/include
LDFLAGS += -L $(TOPDIR)/Contrib/OpenSSL/lib32
LIBS = -lgdi32 -lcJSON -lpng -ljpeg -lgif -lwww -lz -lssl -lcrypto -lwsock32 -lws2_32

EXEC = .exe
