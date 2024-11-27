# $Id$

STRING = String/strcat.o String/strdup.o

include ../Platforms/$(PLATFORM).mk

.PHONY: all clean
.SUFFIXES: .c .o

all: string.a

string.a: $(STRING)
	ar rcs $@ $(STRING)

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.a *.o */*.o