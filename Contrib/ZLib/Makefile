# $Id$

include $(TOPDIR)/Platform/$(PLATFORM).mk

OBJS = adler32.o compress.o crc32.o deflate.o gzclose.o gzlib.o gzread.o gzwrite.o infback.o inffast.o inflate.o inftrees.o trees.o uncompr.o zutil.o

.PHONY: all
.SUFFIXES: .c .o

all: libz.a

libz.a: $(OBJS)
	$(AR) rcs $@ $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.o *.a
