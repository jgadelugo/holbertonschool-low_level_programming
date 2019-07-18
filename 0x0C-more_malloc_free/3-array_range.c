#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of array
 * @max: max value
 * Return: the pointer to the newly created array or NULL if it fails
 */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc(((max - min) + 1) * sizeof(int));

	if (!ptr)
		return (NULL);

	for (i = 0; (min + i) <= max; i++)
		ptr[i] = (min + i);

	return (ptr);
}
