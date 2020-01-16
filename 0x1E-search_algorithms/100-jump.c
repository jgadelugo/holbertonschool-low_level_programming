#include "search_algos.h"
#include <math.h>

/**
  * jump_search - Use jump search to find a value in an array
  * @array: array to search
  * @size: size of  search
  * @value: value to search for
  *
  * Return: return index where value resides or -1 if none
  */
int jump_search(int *array, size_t size, int value)
{
	unsigned int i, jump = sqrt(size);

	for (i = 0; i < size; i += jump)
	{
		if (array[i + jump] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	if (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		printf("Value found between indexes [%d] and [%d]\n", i, i + jump);
	}
	else
		printf("Value found between indexes [%d] and [%d]\n", i - jump, i);
	for (; i <= (i + jump) && i < size; i++, jump--)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	printf("Value checked array[%d] = [%d]\n", i - jump, array[i - jump]);
	return (-1);
}
