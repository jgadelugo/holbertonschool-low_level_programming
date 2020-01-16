#include "search_algos.h"

/**
  * print_array - prints an array
  * @arr: array to print
  * @start: start of print
  * @end: end of print
  */

void print_array(int *arr, int start, int end)
{
	int i = 0;

	printf("Searching in array: ");
	while (start <= end)
	{
		if (i > 0)
			printf(", ");
		i = start++;
		printf("%d", arr[i++]);
	}
	printf("\n");
}


/**
  * rec_search - recursively search using binary algo
  * @arr: array to search
  * @l: left most value
  * @r: right most value
  * @val: value to search
  *
  * Return: index or -1 if not found
  */

int rec_search(int *arr, int l, int r, int val)
{
	int mid;

	if (r >= l)
	{
		mid = l + (r - l) / 2;
		print_array(arr, l, r);

		if (arr[mid] == val)
		{
			if (mid != 0 && arr[mid - 1] == val)
				return (rec_search(arr, l, mid, val));
			return (mid);
		}

		if (arr[mid] > val)
			return (rec_search(arr, l, mid - 1, val));

		return (rec_search(arr, mid + 1, r, val));
	}
	return (-1);
}


/**
  * advanced_binary - Search for value in an array of ints using binary search
  * @array: array to search
  * @size: of array
  * @value: Value to search for
  *
  * Return: first index where the value is located
  */

int advanced_binary(int *array, size_t size, int value)
{
	if (array && size)
		return (rec_search(array, 0, (int)size - 1, value));
	return (-1);
}

/**
  * exponential_search - uses exponential and binary search to find value
  * @array: start of array to search
  * @size: size to search
  * @value: value to search for
  *
  * Return: index of value or -1 if not found
  */

int exponential_search(int *array, size_t size, int value)
{
	unsigned int l = 0, r = 1;
	int idx;

	if (array && size)
	{
		for (; r < size && array[r] < value; l = r, r *= 2)
			printf("Value checked array[%d] = [%d]\n", r, array[r]);

		if (r >= size)
			r = size - 1;
		printf("Value found between indexes [%d] and [%d]\n", l, r);
		idx = advanced_binary(array + l, r - l + 1, value);
		if (idx != -1)
			return (idx + l);
	}
	return (-1);
}
