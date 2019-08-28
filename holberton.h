#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <string.h>
#include <limits.h>
#include <signal.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void ctrl_c(int x);
int exit_1(char *entrada);
int _strcmp(char *str1, char *str2);
char *_concat(char *str1, char *str2);
extern char **environ;

#endif
