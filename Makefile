# $Id$

PLATFORM = generic

include Platforms/$(PLATFORM).mk

FLAGS = PLATFORM=$(PLATFORM)

.PHONY: all clean ./Browser ./Library

all: ./Browser ./Library

./Browser ./Library::
	$(MAKE) -C $@ $(FLAGS)

clean:
	$(MAKE) -C ./Browser $(FLAGS)
	$(MAKE) -C ./Library $(FLAGS)