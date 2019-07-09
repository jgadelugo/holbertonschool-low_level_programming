#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to a char, string that will be checked
 * @accept: pointer to the substring we check for
 * Return: unsigned int, length of a prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, x, i;

	for (x = 0; s[x] != '\0' && x == count; x++)
		for (i = 0; accept[i] != '\0'; i++)
			if (s[x] == accept[i])
				count++;

	return (count);
}
