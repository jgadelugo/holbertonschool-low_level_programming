#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints half a string
 * @a: array
 * @n: length of array
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		if (count != n -1)
			printf("%i, ", *(a + count));
		else
			printf("%i", *(a + count));
	}
	printf("\n");
}
