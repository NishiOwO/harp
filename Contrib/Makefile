# $Id$

FLAG=PLATFORM=$(PLATFORM) TOPDIR=../..

.PHONY: all clean ./JPEG ./ZLib ./PNG ./GIF ./cJSON

all: ./JPEG ./ZLib ./PNG ./GIF ./cJSON

./JPEG ./ZLib ./PNG ./GIF ./cJSON::
	$(MAKE) -C $@ $(FLAG)

clean:
	$(MAKE) -C ./JPEG $(FLAG) clean
	$(MAKE) -C ./PNG $(FLAG) clean
	$(MAKE) -C ./GIF $(FLAG) clean
	$(MAKE) -C ./cJSON $(FLAG) clean
	$(MAKE) -C ./ZLib $(FLAG) clean
