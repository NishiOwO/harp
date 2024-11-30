# $Id$

FLAG=PLATFORM=$(PLATFORM) TOPDIR=../..

.PHONY: all clean ./SQLite ./IJG ./ZLib

all: ./SQLite ./IJG ./ZLib

./SQLite ./IJG ./ZLib::
	$(MAKE) -C $@ $(FLAG)

clean:
	$(MAKE) -C ./SQLite $(FLAG) clean
	$(MAKE) -C ./IJG $(FLAG) clean
	$(MAKE) -C ./ZLib $(FLAG) clean
