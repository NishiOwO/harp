/* $Id$ */

#include "../harp_string.h"

#include <stdlib.h>
#include <string.h>

char* harp_strcat(const char* str1, const char* str2){
    char* buffer = malloc(strlen(str1) + strlen(str2) + 1);
    strcpy(buffer, str1);
    strcpy(buffer + strlen(str1), str2);
    return buffer;
}