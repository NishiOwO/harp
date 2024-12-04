# $Id$

include $(TOPDIR)/Platform/generic.mk

GUI = gdi

AR = x86_64-w64-mingw32-ar
CC = x86_64-w64-mingw32-gcc

LIBS = -lgdi32 -lwsock32

EXEC = .exe
