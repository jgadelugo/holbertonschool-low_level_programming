#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - get length
 * @c: string
 * Return: returns length
 */

int _strlen(char *c)
{
	int len;

	for (len = 0; c[len] != '\0'; len++)
		;

	return (len);
}

/**
 * argstostr - concat str
 * @ac: number of args
 * @av: args
 * Return: returns a pointer to the two strings concatenated, or NULL if fails
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int x, y, len, c;

	if (!ac || !av)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		len += _strlen(av[x]);
	}
	ptr = (char *)malloc(len * sizeof(char *) + ac + 1);

	if (!ptr)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++, c++)
		{
			ptr[c] = av[x][y];
		}
		ptr[c] = '\n';
		c++;
	}
	return (ptr);
}
