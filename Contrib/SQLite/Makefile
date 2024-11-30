# $Id$

include $(TOPDIR)/Platform/$(PLATFORM).mk

.PHONY: all clean

all: sqlite3.o

sqlite3.o: sqlite3.c sqlite3.h sqlite3ext.h
	$(CC) $(CFLAGS) -c -o $@ sqlite3.c

clean:
	rm -f *.o
