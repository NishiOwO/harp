# $Id$

include $(TOPDIR)/Platform/$(PLATFORM).mk

OBJS = cJSON.o

.PHONY: all
.SUFFIXES: .c .o

all: ./libcJSON.a

libcJSON.a: $(OBJS)
	$(AR) rcs $@ $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.o *.a
