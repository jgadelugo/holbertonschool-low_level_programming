#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy the string given to a newly allocated space in memory
 * @str: string to copy
 * Return: returns a pointer to the copy, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int x, len;

	for (len = 0; str[len]; len++)
		;

	ptr = malloc(len * sizeof(char));

	if (ptr == 0 || str == 0)
		return (NULL);

	for (x = 0; x <= len; x++)
		ptr[x] = str[x];

	return (ptr);
}
