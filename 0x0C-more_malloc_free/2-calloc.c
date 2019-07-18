#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of type
 * Return: void pointer if succesful return NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		((char *) ptr)[i] = 0;

	return (ptr);
}
