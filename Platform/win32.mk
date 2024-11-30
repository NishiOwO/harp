# $Id$

include $(TOPDIR)/Include.mk
include $(TOPDIR)/Platform/generic.mk

GUI = gdi

AR = i686-w64-mingw32-ar
CC = i686-w64-mingw32-gcc

LIBS = -lgdi32

EXEC = .exe
