# $Id$

STRING = String/strcat.o String/strdup.o

include ../Platform/$(PLATFORM).mk

.PHONY: all clean
.SUFFIXES: .c .o

all: string.a

string.a: $(STRING)
	$(AR) rcs $@ $(STRING)

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.a *.o */*.o
