#include "holberton.h"
/**
 * exit_1 - built_in for exit
 * @entrada: pointer to buffer
 * Return: o in exit
 */
int exit_1(char *entrada)
{
	if (_strcmp(entrada, "exit") == 0)
	{
		free(entrada);
		exit(0);
	}
	return (0);
}
