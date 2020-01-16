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
	unsigned int i = 0, jump = sqrt(size);

	if (!array)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += jump;
	}
	i -= jump;
	printf("Value found between indexes [%d] and [%d]\n", i, i + jump);
	for (; i <= (i + jump) && i < size; i++, jump--)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
