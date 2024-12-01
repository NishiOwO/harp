/* $Id$ */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifdef __MINGW32__
#include <windows.h>
#else
#include <pwd.h>
#include <unistd.h>
#include <sys/stat.h>
#endif

#include <cJSON.h>

#include "harp_string.h"

cJSON* json;

int harp_gui_init(void);
int harp_gui_json(void);
int harp_gui_loop(void);

int argc;
char** argv;

int main(int _argc, char** _argv) {
	int i = 0;
	int st;
	char* data;
	char* path;
	char* confpath;
	FILE* config;
#ifdef __MINGW32__
	char* env = getenv("LocalAppData");
	confpath = harp_strcat(env, "/Harp");
	CreateDirectory(confpath, NULL);
#else
	confpath = harp_strcat(getpwuid(getuid())->pw_dir, "/.config");
	mkdir(confpath, 0700);
	free(confpath);
	confpath = harp_strcat(getpwuid(getuid())->pw_dir, "/.config/Harp");
	mkdir(confpath, 0700);
#endif
	path = harp_strcat(confpath, "/config.json");
	config = fopen(path, "r");
	if(config == NULL) {
		json = cJSON_CreateObject();
	} else {
		struct stat s;
		stat(path, &s);
		data = malloc(s.st_size);
		fread(data, s.st_size, 1, config);
		json = cJSON_Parse(data);
		free(data);
	}
	if((st = harp_gui_json())) return st;
	if(config != NULL) fclose(config);
	config = fopen(path, "w");
	if(config == NULL) return 1;
	data = cJSON_Print(json);
	fwrite(data, strlen(data), 1, config);
	fclose(config);
	free(path);
	free(confpath);
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
