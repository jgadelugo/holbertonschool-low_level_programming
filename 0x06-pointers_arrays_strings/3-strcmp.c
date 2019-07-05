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
	int comp = 0, count1 = 0, count2 = 0;

	for (; *(s1 + count1) != '\0' || *(s2 + count2) != '\0'; count1++, count2++)
	{
		if (*(s1 + count1) != '\0' && *(s2 + count2) != '\0')
		{
			comp += *(s1 + count1) - *(s2 + count2);
		}
		if (*(s1 + count1) == '\0')
		{
			count1--;
			comp -= (*(s2 + count2) - 68);
		}
		if (*(s2 + count2) == '\0')
		{
			count2--;
			comp += (*(s1 + count1) - 68);
		}
	}
	return (comp);
}
