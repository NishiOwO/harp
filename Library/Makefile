# $Id$

include ../Platforms/$(PLATFORM).mk

.PHONY: all clean
.SUFFIXES: .c .o

all:

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.a *.o