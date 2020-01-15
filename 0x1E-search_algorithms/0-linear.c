#include "search_algos.h"

/**
  * linear_search - Search for a value in an array of ints using linear search
  * @array: array to search
  * @size: of array
  * @value: Value to search for
  *
  * Return: first index where the value is located
  */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	for (i = 0; array && i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
