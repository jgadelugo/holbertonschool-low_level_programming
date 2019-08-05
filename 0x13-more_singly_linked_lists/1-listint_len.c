#include "lists.h"

/**
 * listint_len - return # of elements
 * @h: pointer to the first element
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h; h = (*h).next, i++)
		;

	return (i);
}
