# $Id$

include $(TOPDIR)/Platform/$(PLATFORM).mk

OBJS = cdjpeg.o ckconfig.o jaricom.o jcapimin.o jcapistd.o jcarith.o jccoefct.o jccolor.o jcdctmgr.o jchuff.o jcinit.o jcmainct.o jcmarker.o jcmaster.o jcomapi.o jcparam.o jcprepct.o jcsample.o jctrans.o jdapimin.o jdapistd.o jdarith.o jdatadst.o jdatasrc.o jdcoefct.o jdcolor.o jddctmgr.o jdhuff.o jdinput.o jdmainct.o jdmarker.o jdmaster.o jdmerge.o jdpostct.o jdsample.o jdtrans.o jerror.o jfdctflt.o jfdctfst.o jfdctint.o jidctflt.o jidctfst.o jidctint.o jmemansi.o  jmemmgr.o jmemname.o jmemnobs.o jquant1.o jquant2.o jutils.o rdbmp.o rdcolmap.o rdgif.o rdppm.o rdrle.o rdswitch.o rdtarga.o transupp.o

.PHONY: all
.SUFFIXES: .c .o

all: ./libjpeg.a

libjpeg.a: $(OBJS)
	$(AR) rcs $@ $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.o *.a
