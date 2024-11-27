/* $Id$ */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int i = 0;
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
}