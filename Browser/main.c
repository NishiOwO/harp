/* $Id$ */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int harp_gui_init(void);
int harp_gui_loop(void);

int argc;
char** argv;

int main(int _argc, char** _argv) {
	int i = 0;
	int st;
	argc = _argc;
	argv = _argv;
	for(i = 1; i < argc; i++) {
		if(argv[i][0] == '-') {
			if(strcmp(argv[i], "--help") == 0 || strcmp(argv[i], "-h") == 0) {
				/* help */
				printf("Usage: %s [options] url...\n", argv[0]);
				return 0;
			} else {
				fprintf(stderr, "Invalid option: %s\n", argv[i]);
				return 1;
			}
		} else {
			/* URL */
		}
	}
	if((st = harp_gui_init())) return st;
	return harp_gui_loop();
}
