#include "sort.h"
#include <stdlib.h>
#include <string.h>

/**
 * largest - finds the largest value in an array
 * @array: input array
 * @size: size of array
 * Return: largest value
 */
int largest(int *array, size_t size)
{
	int i, largest;

	largest = array[0];

	for (i = 1; i < (int) size; i++)
	{
		if (array[i] > largest)
			largest = array[i];
	}
	return (largest);
}
/**
 * counting_sort - sorts an array using counting sort algorithm
 * @array: input array
 * @size: size of array
 */
void counting_sort(int *array, size_t size)
{
	int *output, *count, i, large;

	large = largest(array, size);

	output = malloc(sizeof(int) * size);
	count = malloc(sizeof(int) * (large + 1));

	memset(count, 0, sizeof(int));

	for (i = 0; array[i]; ++i)
		++count[array[i]];

	for (i = 1; i <= large; ++i)
		count[i] += count[i - 1];

	print_array(count, (large + 1));

	for (i = 0; array[i]; ++i)
	{
		output[count[array[i]] - 1] = array[i];
		--count[array[i]];
	}

	for (i = 0; array[i]; ++i)
		array[i] = output[i];
}
