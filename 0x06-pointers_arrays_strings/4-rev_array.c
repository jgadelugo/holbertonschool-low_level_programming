#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: int array to reverse
 * @n: number of elements in the array
 * Return: concatenated string
 */

void reverse_array(int *a, int n)
{
	int *begin = a;
	int *end = a + n - 1;
	int hold;

	for (; *begin < *end; begin++, end--)
	{
		hold = *end;
		*end = *begin;
		*begin = hold;
	}
}
