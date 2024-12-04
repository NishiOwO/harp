# $Id$

include ../Platform/$(PLATFORM).mk

.PHONY: all clean
.SUFFIXES: .c .o

all: parser.a

parser.a: y.tab.o lex.yy.o
	$(AR) rcs $@ y.tab.o lex.yy.o

y.tab.c: html.y
	$(YACC) $(YFLAGS) html.y

lex.yy.c: html.l
	$(LEX) $(LFLAGS) html.l

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.a *.o y.tab.c y.tab.h lex.yy.c