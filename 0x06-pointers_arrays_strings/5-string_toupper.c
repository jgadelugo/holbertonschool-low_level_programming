#include "holberton.h"

/**
 * string_toupper - convert to uppercase
 * @a: string in lowercase
 * Return: uppercase
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; *(a + i) != '\0'; i++)
	{
		if (*(a + i) >= 'a' && *(a + i) <= 'z')
			*(a + i) -= 32;
	}
	return (a);
}
