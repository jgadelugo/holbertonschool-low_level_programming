#include "lists.h"
#include <stdio.h>

/**
 * list_len - size of a list_t
 * @h: struct list_t, first node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h; i++, h = h->next)
		;
	return (i);
}
