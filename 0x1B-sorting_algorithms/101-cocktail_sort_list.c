#include "sort.h"
#include <stdlib.h>

/**
 * print_dlistint - prints a doubly linked list
 * @h: head of doubly linked list
 * Return: size of doubly linked list
 */
size_t print_dlistint(const listint_t *h)
{
	size_t size = 0;

	for (; h->next; h = h->next, size++)
		printf("%d, ", h->n);
	printf("%d\n", h->n);
	return (size);
}


/**
 * swap - swaps two nodes in a linked list
 * @list: pointer to doubly linked list
 * @a: pointer to first node
 * @b: pointer to second node
 */
void swap(listint_t **list, listint_t *a, listint_t *b)
{
	listint_t *aprev = a->prev;
	listint_t *bnext = b->next;

	if (aprev)
		aprev->next = b;
	if (bnext)
		bnext->prev = a;

	a->prev = b;
	b->prev = aprev;
	a->next = bnext;
	b->next = a;

	if (b->prev == NULL)
		*list = b;
}

/**
 * cocktail_sort_list - cocktail sort doubly linked list
 * @list: doubly linked list
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *copy = *list;
	int swapped = 1;

	while (swapped)
	{
		swapped = 0;

		while (copy)
		{
			if (copy->next && copy->n > copy->next->n)
			{
				swap(list, copy, copy->next);
				swapped = 1;
				print_dlistint(*list);
			}
			else if (copy->next && copy->n < copy->next->n)
				copy = copy->next;
			else
				break;
		}
		while (copy && copy->prev)
		{
			if (copy->n < copy->prev->n)
			{
				swap(list, copy->prev, copy);
				swapped = 1;
				print_dlistint(*list);
			}
			else if (copy->prev && copy->n > copy->prev->n)
				copy = copy->prev;
			else
				break;
		}
	}
}
