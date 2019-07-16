#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an arry of chars, and initializes it with a char
 * @size: size of array
 * @c: specific char
 * Return: returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(size * sizeof(char));

	if (ptr == 0)
		return (NULL);

	for (x = 0; x < size; x++)
		ptr[x] = c;

	return (ptr);
}
