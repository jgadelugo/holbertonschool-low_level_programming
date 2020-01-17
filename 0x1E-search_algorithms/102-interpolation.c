#include "search_algos.h"

/**
  * interpolation_search - search for value using interpolation search algo
  * @arr: array to search
  * @size: size of array
  * @v: value to search
  *
  * Return: index of value or -1 if not found
  */
int interpolation_search(int *arr, size_t size, int v)
{
	unsigned int pos = 0, l = 0, h = size - 1;

	while (arr)
	{
		pos = l + (((double)(h - l) / (arr[h] - arr[l])) * (v - arr[l]));
		if (pos < size)
			printf("Value checked array[%d] = [%d]\n", pos, arr[pos]);
		else
		{
			printf("Value checked array[%d] is out of range\n", pos);
			return (-1);
		}
		if (arr[pos] == v)
			return (pos);
		if (arr[pos] < v)
			l = pos + 1;
		else
			h = pos - 1;
	}
	return (-1);
}
