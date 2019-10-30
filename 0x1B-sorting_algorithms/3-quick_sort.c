#include "sort.h"

/**
 * swap - swap two values in array
 * @a: first value
 * @b: second value
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * partition - creates partition for quicksort
 * @array: array to sort
 * @low: low index
 * @high: high index
 * @size: size of array
 * Return: partition index
 */
int partition(int array[], int low, int high, size_t size)
{
	int i, j, check = 0;

	i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < array[high])
		{
			check = 1;
			i++;
			swap(&array[j], &array[i]);
		}
	}
	if (check == 1)
		print_array(array, size);
	swap(&array[i + 1], &array[high]);

	if (check == 0)
		print_array(array, size);

	return (i + 1);
}
/**
 * quicksort - start quicksort algorithm
 * @array: array to sort
 * @low: low index
 * @high: high index
 * @size: size of array
 */
void quicksort(int *array, int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		quicksort(array, low, p - 1, size);
		quicksort(array, p + 1, high, size);
	}
}
/**
 * quick_sort - calls quicksort algorithm
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
	print_array(array, size);
}
