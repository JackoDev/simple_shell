#include "holberton.h"
/**
 * ctrl_c - function to handle ctrl+c
 * @x: rep of getline
 * Result: void function
 */
void ctrl_c(int x)
{
	(void) x;
	write(1, "\n$ ", 3);
	fflush(stdout);
}
