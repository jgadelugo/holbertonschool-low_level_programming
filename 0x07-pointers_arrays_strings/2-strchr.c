#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer where we search for charachter
 * @c: character we search for
 * Return: NULL if character is not found, return pointer
 */

char *_strchr(char *s, char c)
{
	char *s1 = s;

	for (; *s1 != '\0'; s1++)
		if (*s1 == c)
			return (s1);
	return (0);
}
