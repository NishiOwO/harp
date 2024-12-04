# $Id$

include $(TOPDIR)/Include.mk
include $(TOPDIR)/Optimize.mk

GUI = motif

AR = ar
YACC = yacc
YFLAGS = -y -d
LEX = lex
LFLAGS =
CC = cc
CFLAGS = -std=c99 -D_DEFAULT_SOURCE $(INCLUDES) $(OPTIMIZE) `pkg-config --cflags x11` `pkg-config --cflags xt` `pkg-config --cflags xft`
LDFLAGS = $(OPTIMIZE) -L $(TOPDIR)/Contrib/GIF -L $(TOPDIR)/Contrib/JPEG -L $(TOPDIR)/Contrib/PNG -L $(TOPDIR)/Contrib/WWW -L $(TOPDIR)/Contrib/ZLib -L $(TOPDIR)/Contrib/cJSON
LIBS =`pkg-config --libs x11` -lXm `pkg-config --libs xt` `pkg-config --libs xft` -lpthread -lcJSON -lpng -ljpeg -lgif -lz -lwww -lssl -lcrypto
