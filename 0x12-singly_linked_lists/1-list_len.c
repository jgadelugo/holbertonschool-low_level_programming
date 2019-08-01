#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t
 * @h: struct list_t, first node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h; i++, h = h->next)
		;
	return (i);
}
