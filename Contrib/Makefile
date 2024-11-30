# $Id$

FLAG=PLATFORM=$(PLATFORM) TOPDIR=../..

.PHONY: all clean ./SQLite ./IJG

all: ./SQLite ./IJG

./SQLite ./IJG::
	$(MAKE) -C $@ $(FLAG)

clean:
	$(MAKE) -C ./SQLite $(FLAG) clean
	$(MAKE) -C ./IJG $(FLAG) clean
