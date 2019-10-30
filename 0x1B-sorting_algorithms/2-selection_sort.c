#include "sort.h"


/**
 * selection_sort - sorts array with selection sort algorithm
 * @array: array of ints to be sorted
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min;
	int temp;


	for (i = 0; i < size - 1; i++)
	{
		min = i;

		for (j = i + 1; j < size; j++)
			if (array[j] < array[min])
				min = j;
		if (min != i)
		{
			temp = array[min];
			array[min] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
