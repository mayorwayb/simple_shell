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
#include <stdbool.h>
#define MAX_CMD_ARGS 10

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
void handle_exit(char *user_input);
void signit_handler(int signal);
void run_shell(char **argv, char **envp, bool interactive_mode);
void run_command(char **argv2, char **arv1, char **envp);
char *handle_path(char **rgv, const char *cmd);
int main(int argc, char **argv, char **envp);
char *_strcat(char *dest, const char *src);
char *_strncpy(char *dest, const char *src, int n);
int _strlen(const char *s);
char *_strncat(char *dest, const char *src, size_t n);
int _strcmp(const char *s1, const char *s2);
char *trim(const char *cmd);
void run_command(char **cmd_args, char **argv, char **envp);

#endif
