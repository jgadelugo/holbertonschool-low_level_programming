#include "holberton.h"

/**
 * cap_string - take strings and capitalize words
 * @a: string to capitalize
 * Return: capitalized words
 */

char *cap_string(char *a)
{
	int i;
	char previous;

	for (; *(a + i) != '\0'; i++)
	{
		if (*(a + i) >= 'a' && *(a + i) <= 'z')
			if (previous == ' ' || previous == '\n')
				*(a + i) -= 32;
			else if (previous == '.' || previous == '\t')
				*(a + i) -= 32;
		previous = *(a + i);
	}
	return (a);
}
