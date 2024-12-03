# $Id$

include $(TOPDIR)/Platform/$(PLATFORM).mk

OBJS = dgif_lib.o egif_lib.o getarg.o gifalloc.o gif_err.o gif_font.o gif_hash.o openbsd-reallocarray.o qprintf.o quantize.o

.PHONY: all
.SUFFIXES: .c .o

all: libgif.a

libgif.a: $(OBJS)
	$(AR) rcs $@ $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.o *.a
