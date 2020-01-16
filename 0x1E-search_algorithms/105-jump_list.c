#include "search_algos.h"
#include <math.h>

/**
  * jump_list - use jump algo to search for value in linked list
  * @list: singly linked list
  * @size: of list
  * @value: value to search for
  *
  * Return: return node where value resides or NULL if not found
  */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	unsigned int i, jump = sqrt(size), l, r;
	listint_t *start, *end = list;

	if (!list)
		return (NULL);
	while (end->next && end->n < value)
	{
		start = end;
		for (i = 0; i < jump && end->next; i++)
			end = end->next;
		printf("Value checked at index [%d] = [%d]\n", (int)end->index, end->n);
	}
	l = (int)start->index;
	r = (int)end->index;
	printf("Value found between indexes [%d] and [%d]\n", l, r);
	for (;start && l <= r; l++, start = start->next)
	{
		printf("Value checked at index [%d] = [%d]\n", l, start->n);
		if (start->n == value)
			return (start);
	}
	return (NULL);
		
}
