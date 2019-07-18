#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free (realloc)
 * @ptr: pointer 
 * @old_size:
 * @new_size:
 * Return: new void pointer
 */



void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);
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
	ptr1 = malloc(new_size);

	if (!ptr1)
		return (NULL);
	for (; x < old_size; x++)
		((char *)ptr1)[x] = ((char*)ptr)[x];
	free(ptr);
	return (ptr1);
}
