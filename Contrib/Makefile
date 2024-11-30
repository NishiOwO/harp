# $Id$

FLAG=PLATFORM=$(PLATFORM) TOPDIR=../..

.PHONY: all clean ./SQLite

all: ./SQLite

./SQLite::
	$(MAKE) -C $@ $(FLAG)

clean:
	$(MAKE) -C ./SQLite $(FLAG)
