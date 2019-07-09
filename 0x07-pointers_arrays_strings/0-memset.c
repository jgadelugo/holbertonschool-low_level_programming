#include "holberton.h"

/**
 * _memset - memset function
 * @s: start point of string to change
 * @b: value that will replace
 * @n: number of bytes to change
 * Return: changed pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	
	for (;n != 0; p++, n--)
		*p = b;
	return (s);
}
