# $Id$

TOPDIR = .
PLATFORM = generic

include Platform/$(PLATFORM).mk

FLAGS = PLATFORM=$(PLATFORM) TOPDIR=..

.PHONY: all format clean ./Browser ./Library ./Parser

all: ./Browser ./Library ./Parser ./Contrib

./Library ./Parser ./Contrib::
	$(MAKE) -C $@ $(FLAGS)

./Browser:: ./Library ./Parser ./Contrib
	$(MAKE) -C $@ $(FLAGS)

format:
	clang-format --verbose -i `find . "(" -name "*.c" -or -name "*.h" ")" -and -not -name "y.tab.c" -and -not -name "y.tab.h" -and -not -name "lex.yy.c" -and -not -name "stb_image.h" -not -name "sqlite3*.*"`

clean:
	$(MAKE) -C ./Browser $(FLAGS) clean
	$(MAKE) -C ./Contrib $(FLAGS) clean
	$(MAKE) -C ./Library $(FLAGS) clean
	$(MAKE) -C ./Parser $(FLAGS) clean
