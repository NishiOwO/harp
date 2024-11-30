# $Id$

include ../Platform/$(PLATFORM).mk

OBJS = main.o gui_$(GUI).o
STATIC = ../Library/string.a ../Parser/parser.a ../Contrib/*/*.a

.PHONY: all clean
.SUFFIXES: .c .o

all: harp$(EXEC)

harp$(EXEC): $(OBJS) $(STATIC)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LIBS) $(STATIC)

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f harp harp.exe *.o
