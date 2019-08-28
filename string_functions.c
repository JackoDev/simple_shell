#include "holberton.h"
/**
 * _concat - function to compare two strings
 * @str1: first string
 * @str2: second string
 * Return: 0 in succes
 */
char *_concat(char *str1, char *str2)
{
	int x, y, z;
	char *buff;

	if (str1 == NULL)
	{
		str1 = "";
	}

	if (str2 == NULL)
	{
		str2 = "";
	}

	for (x = 0 ; str1[x] ; x++)
	{
	}
	for (y = 0 ; str2[y] ; y++)
	{
	}

	buff = malloc(sizeof(*buff) * (x + y + 1));

	if (buff == NULL)
		return (NULL);

	for (z = 0 ; z < x ; z++)
	{
		buff[z] = str1[z];
	}

	for (x = 0 ; x < y ; x++)
	{
		buff[x + z] = str2[x];
	}
	buff[x + z] = '\0';
	return (buff);
}
/**
 * _strcmp - function to compare two strings
 * @str1: string 1
 * @str2: string 2
 * Return: 0 in succes
 */
int _strcmp(char *str1, char *str2)
{
	int i = 0;

	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}
