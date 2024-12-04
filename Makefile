# $Id$

TOPDIR = .
PLATFORM = unix

include Platform/$(PLATFORM).mk

FLAGS = PLATFORM=$(PLATFORM) TOPDIR=..

.PHONY: all format clean ./Browser ./Library

all: ./Browser ./Library ./Contrib

./Library ./Contrib::
	$(MAKE) -C $@ $(FLAGS)

./Browser:: ./Library ./Contrib
	$(MAKE) -C $@ $(FLAGS)
	@echo "*** Welcome to Harp."

format:
	clang-format --verbose -i `find Browser Library Parser "(" -name "*.c" -or -name "*.h" ")" -and -not -name "y.tab.c" -and -not -name "y.tab.h" -and -not -name "lex.yy.c"`

clean:
	$(MAKE) -C ./Browser $(FLAGS) clean
	$(MAKE) -C ./Contrib $(FLAGS) clean
	$(MAKE) -C ./Library $(FLAGS) clean
