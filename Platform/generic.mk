# $Id$

include $(TOPDIR)/Include.mk
include $(TOPDIR)/Optimize.mk

AR = ar
YACC = yacc
YFLAGS = -y -d
LEX = lex
LFLAGS =
CC = cc
CFLAGS = -std=c99 -D_DEFAULT_SOURCE $(INCLUDES) $(OPTIMIZE)
LDFLAGS = $(OPTIMIZE) -L $(TOPDIR)/Contrib/GIF -L $(TOPDIR)/Contrib/JPEG -L $(TOPDIR)/Contrib/PNG -L $(TOPDIR)/Contrib/WWW -L $(TOPDIR)/Contrib/ZLib -L $(TOPDIR)/Contrib/cJSON
LIBS = -lpthread -lcJSON -lpng -ljpeg -lgif -lz -lwww -lssl -lcrypto
