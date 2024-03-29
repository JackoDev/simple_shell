#include "holberton.h"
/**
 * main - main function to invoke the shell
 * Return: its a void function
 */
int main(void)
{
	char *buffer = NULL, *argv[] = {"", NULL}, *token;
	size_t len = 0;
	int stat2, val_exec;

	signal(SIGINT, ctrl_c);

	while (1)
	{
		write(1, "$ ", 2);
		buffer = NULL;
		if ((getline(&buffer, &len, stdin)) == EOF)
			exit(0);

		exit_1(buffer);
		token = strtok(buffer, " \n\t");
		if (token != NULL)
		{
			if (fork() == 0)
			{
				val_exec = execve(token, argv, environ);
				if (val_exec == -1)
				{
					perror("./shell");
					free(buffer);
					exit(-1); }}
			else
				wait(&stat2);
			free(buffer); }
		else
			free(buffer); }
	return (0);
}
