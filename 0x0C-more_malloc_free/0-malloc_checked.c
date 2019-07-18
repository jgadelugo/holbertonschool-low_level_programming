#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size
 * Return: void pointer if succesfull, exits with a status value of 98 if fails
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
		exit(98);

	return (ptr);
}
