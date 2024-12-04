# $Id$

include $(TOPDIR)/Platform/generic.mk

GUI = motif

CFLAGS += `pkg-config --cflags x11` `pkg-config --cflags xt` `pkg-config --cflags xft`
LIBS += `pkg-config --libs x11` -lXm `pkg-config --libs xt` `pkg-config --libs xft`
