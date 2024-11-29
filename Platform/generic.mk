# $Id$

GUI = motif

AR = ar
YACC = yacc
YFLAGS = -y -d
LEX = lex
LFLAGS =
CC = cc
CFLAGS = -std=c99 -D_DEFAULT_SOURCE -I ../Library -I .
LDFLAGS =
LIBS = -lX11 -lXm -lXt -lpthread
