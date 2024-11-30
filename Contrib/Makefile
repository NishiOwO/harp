# $Id$

FLAG=PLATFORM=$(PLATFORM) TOPDIR=../..

.PHONY: all clean ./SQLite ./JPEG ./ZLib ./PNG

all: ./SQLite ./JPEG ./ZLib ./PNG

./SQLite ./JPEG ./ZLib ./PNG::
	$(MAKE) -C $@ $(FLAG)

clean:
	$(MAKE) -C ./SQLite $(FLAG) clean
	$(MAKE) -C ./JPEG $(FLAG) clean
	$(MAKE) -C ./ZLib $(FLAG) clean
	$(MAKE) -C ./PNG $(FLAG) clean
