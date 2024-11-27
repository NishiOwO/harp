# $Id$

PLATFORM = generic

include Platforms/$(PLATFORM).mk

FLAGS = PLATFORM=$(PLATFORM)

.PHONY: all format clean ./Browser ./Library ./Parser

all: ./Browser ./Library ./Parser

./Library ./Parser::
	$(MAKE) -C $@ $(FLAGS)

./Browser:: ./Library ./Parser
	$(MAKE) -C $@ $(FLAGS)

format:
	clang-format --verbose -i `find . -name "*.c" -or -name "*.h"`

clean:
	$(MAKE) -C ./Browser $(FLAGS) clean
	$(MAKE) -C ./Library $(FLAGS) clean
	$(MAKE) -C ./Parser $(FLAGS) clean