#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: size difference of strings
 */

int _strcmp(char *s1, char *s2)
{
	int count = 0;

	while (*(s1 + count) != '\0' || *(s2 + count) != '\0')
	{
		if (s1 != s2)
			return (*(s1 + count) - *(s2 + count));
		count++;
	}
	return (0);
}
