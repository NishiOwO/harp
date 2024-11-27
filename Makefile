# $Id$

PLATFORM = generic

include Platforms/$(PLATFORM).mk

FLAGS = PLATFORM=$(PLATFORM)

.PHONY: all clean ./Browser ./Library ./Parser

all: ./Browser ./Library ./Parser

./Browser ./Library ./Parser::
	$(MAKE) -C $@ $(FLAGS)

clean:
	$(MAKE) -C ./Browser $(FLAGS) clean
	$(MAKE) -C ./Library $(FLAGS) clean
	$(MAKE) -C ./Parser $(FLAGS) clean