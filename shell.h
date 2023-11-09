#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#define MAX_C 10

/**
 * struct denum - the structure that contains vars
 * @cnt: lines cnt
 */
typedef struct denum
{
	int cnt;
} denum;
int my_strncmp(char *s1, char *s2, int num);
char *_strcpy(char *dest, const char *src);
int intlen(int n);
char *itoa(int num);
void gererror(denum *p, char **argv, char *cmd);


#endif
