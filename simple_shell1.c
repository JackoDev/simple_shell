#include "holberton.h"
/**
 * main - main function to invoke the shell
 * Return: its a void function
 */
int main(void)
{
	char *buffer = NULL, *argv[] = {"", NULL}, *token;
	size_t len = 0;
	int stat1, stat2, val_exec;

	signal(SIGINT, ctrl_c);
	while (1)
	{
		write(1, "$ ", 2);
		buffer = NULL;
		stat1 = getline(&buffer, &len, stdin);

		if (stat1 == -1)
		{
			perror("./shell");
			free(buffer);
			exit(-1);
		}

		token = strtok(buffer, " \n\t");
		exit_1(buffer);
		if (fork() == 0)
		{
			val_exec = execve(token, argv, environ);
			if (val_exec == -1)
			{
				perror("./shell");
				free(buffer);
				exit(-1);
			}
		}
		else
			wait(&stat2);

		free(buffer);
	}
	return (0);
}

