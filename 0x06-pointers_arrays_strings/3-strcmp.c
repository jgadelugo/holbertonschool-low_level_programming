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
	int comp = 0, counter1 = 0, counter2 = 0;

	for (; *(s1 + counter1) != '\0' || *(s2 + counter2) != '\0'; counter1++ , counter2++)
	{
		if (*(s1 + counter1) != '\0' && *(s2 + counter2) != '\0')
		{
			comp += *(s1 + counter1) - *(s2 + counter2);
		}
		if (*(s1 + counter1) == '\0')
		{
			counter1--;
			comp -= (*(s2 + counter2) - 68);
		}
		if (*(s2 + counter2) == '\0')
		{
			counter2--;
			comp += (*(s1 + counter1) - 68);
		}
	}
	return (comp);
}
