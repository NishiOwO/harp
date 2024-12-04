# $Id$

include $(TOPDIR)/Platform/generic.mk

GUI = gdi

AR = x86_64-w64-mingw32-ar
CC = x86_64-w64-mingw32-gcc

CFLAGS += -I $(TOPDIR)/Contrib/OpenSSL/include
LDFLAGS += -L $(TOPDIR)/Contrib/OpenSSL/lib64
LIBS = -lgdi32 -lcJSON -lpng -ljpeg -lgif -lz -lwww -lssl -lcrypto -lwsock32 -lws2_32

EXEC = .exe
