# $Id$

OBJS = main.o
STATIC = ../Library/string.a ../Parser/parser.a

include ../Platforms/$(PLATFORM).mk

.PHONY: all clean
.SUFFIXES: .c .o

all: harp$(EXEC)

harp$(EXEC): $(OBJS) $(STATIC)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LIBS) $(STATIC)

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f harp harp.exe *.o