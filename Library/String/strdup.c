/* $Id$ */

#include "../harp_string.h"

#include <stdlib.h>
#include <string.h>

char* harp_strdup(const char* str) {
	char* buffer = malloc(strlen(str) + 1);
	strcpy(buffer, str);
	return buffer;
}