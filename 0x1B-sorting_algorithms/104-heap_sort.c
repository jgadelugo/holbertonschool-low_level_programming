#include "sort.h"

/**
 * swap -  swap position of two elements
 * @array: for printing
 * @size: for printing
 * @a: element to swap with b
 * @b: element to swap with a
 */
void swap(int *array, size_t size, int *a, int *b)
{
	int temp = *a;

	if (*a != *b)
	{
		*a = *b;
		*b = temp;
		print_array(array, size);
	}
}

/**
 * heapify - "heapify" a tree
 * @array: array to "heapify"
 * @size: size of array
 * @i: idx to check if its larger
 * @ac_size: actual size for printing
 */
void heapify(int *array, size_t size, size_t i, size_t ac_size)
{
	size_t largest = i;
	size_t left = 2 * i + 1;
	size_t right = 2 * i + 2;


	if (left < size && array[left] > array[largest])
		largest = left;
	if (right < size && array[right] > array[largest])
		largest = right;

	if (largest != i)
	{
		swap(array, ac_size, &array[i], &array[largest]);
		heapify(array, size, largest, ac_size);
	}
}

/**
 * heap_sort - Sorts an array of integers in ascending order using Heap sort
 * @array: array to sort
 * @size: size of array
 */
void heap_sort(int *array, size_t size)
{
	int i;

	for (i = size / 2 - 1; i >= 0; i--)
		heapify(array, size, i, size);

	for (i = size - 1; i >= 0; i--)
	{
		swap(array, size, &array[0], &array[i]);
		heapify(array, i, 0, size);
	}
}
