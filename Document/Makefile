# $Id$

.PHONY: all clean

all: ../README.txt

../README.txt: README.ms
	tbl $< | groff -Tutf8 -ms | perl -pe 's/\e\[[0-9;]*m(?:\e\[K)?//g' | col -b | perl -0777 -pe 's/\A\n+//gm' | perl -0777 -pe 's/\n+\z/\n/gm' > $@

clean:
	rm -f ../README.txt
