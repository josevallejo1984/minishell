#ifndef JVC_H
#define JVC_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

/* prototypes owner */
char *_getlines(void);
int _strcmp(char *s1, char *s2);
char **_strtok(char *argv);
int _execev(char **argvs);
char *_strcat(char *dest, char *src);
char *_strstr(char *haystack, char *needle);
char **get_path(char **env);
#endif

