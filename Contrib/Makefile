# $Id$

FLAG=PLATFORM=$(PLATFORM) TOPDIR=../..

.PHONY: all clean ./JPEG ./ZLib ./PNG ./GIF ./cJSON ./WWW

all: ./JPEG ./ZLib ./PNG ./GIF ./cJSON ./WWW

./JPEG ./ZLib ./PNG ./GIF ./cJSON ./WWW::
	$(MAKE) -C $@ $(FLAG)

clean:
	$(MAKE) -C ./JPEG $(FLAG) clean
	$(MAKE) -C ./PNG $(FLAG) clean
	$(MAKE) -C ./GIF $(FLAG) clean
	$(MAKE) -C ./cJSON $(FLAG) clean
	$(MAKE) -C ./ZLib $(FLAG) clean
	$(MAKE) -C ./WWW $(FLAG) clean
