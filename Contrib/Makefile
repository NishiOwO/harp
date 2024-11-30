# $Id$

FLAG=PLATFORM=$(PLATFORM) TOPDIR=../..

.PHONY: all clean ./SQLite ./JPEG ./ZLib ./PNG ./GIF

all: ./SQLite ./JPEG ./ZLib ./PNG ./GIF

./SQLite ./JPEG ./ZLib ./PNG ./GIF::
	$(MAKE) -C $@ $(FLAG)

clean:
	$(MAKE) -C ./SQLite $(FLAG) clean
	$(MAKE) -C ./JPEG $(FLAG) clean
	$(MAKE) -C ./ZLib $(FLAG) clean
	$(MAKE) -C ./PNG $(FLAG) clean
	$(MAKE) -C ./GIF $(FLAG) clean
