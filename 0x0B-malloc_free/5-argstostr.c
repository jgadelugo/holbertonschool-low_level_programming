#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concat str
 * @ac: number of args
 * @av: args
 * Return: returns a pointer to the two strings concatenated, or NULL if fails
 */

char *argstostr(int ac, char **av)
{
	char **ptr;
	int x, y, len, start = 0;

	if (!ac || !av)
		return (NULL);

	ptr = (char **)malloc((ac) * sizeof(char *));

	if (!ptr)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		len = strlen(av[x]);
		ptr[x] = (char *)malloc(len * sizeof(char));
		if (!ptr[x])
			return (NULL);
		for (y = 0; y <= len; y++)
		{
			*ptr[start + y] = av[x][y];
		}
		start += len;
	}
	return (*ptr);
}
