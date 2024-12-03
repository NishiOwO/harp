# $Id$

include $(TOPDIR)/Platform/$(PLATFORM).mk

OBJS = png.o pngerror.o pngget.o pngmem.o pngpread.o pngread.o pngrio.o pngrtran.o pngrutil.o pngset.o pngtest.o pngtrans.o pngwio.o pngwrite.o pngwtran.o pngwutil.o

.PHONY: all
.SUFFIXES: .c .o

all: libpng.a

libpng.a: $(OBJS)
	$(AR) rcs $@ $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.o *.a
