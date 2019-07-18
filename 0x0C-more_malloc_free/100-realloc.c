#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free (realloc)
 * @ptr: pointer
 * @old_size: size of old pointer
 * @new_size: size of new pointer
 * Return: new void pointer or NULL if it fails
 */



void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;
	unsigned int x;

	if (!ptr)
	{
		ptr1 = malloc(new_size);
		if (!ptr1)
			return (NULL);
		return (ptr1);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	ptr1 = malloc(new_size);

	if (!ptr1)
		return (NULL);

	if (new_size < old_size)
		for (; x < new_size; x++)
			((char *)ptr1)[x] = ((char *)ptr)[x];
	else
		for (; x < old_size; x++)
			((char *)ptr1)[x] = ((char *)ptr)[x];

	free(ptr);

	return (ptr1);
}
