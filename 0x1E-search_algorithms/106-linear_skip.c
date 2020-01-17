#include "search_algos.h"

/**
  * linear_skip - find value in skip list
  * @list: skip list
  * @value: value to search for
  *
  * Return: return node where value resides or NULL if not found
  */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	unsigned int l, r;
	skiplist_t *start, *end = list;

	if (!list)
		return (NULL);
	while (end->next && end->n < value)
	{
		start = end;
		if (end->express)
		{
			end = end->express;
			printf("Value checked at index [%d] = [%d]\n", (int)end->index, end->n);
		}
		else
			while (end->next)
				end = end->next;
	}
	l = (int)start->index;
	r = (int)end->index;
	printf("Value found between indexes [%d] and [%d]\n", l, r);
	for (; start && l <= r; l++, start = start->next)
	{
		printf("Value checked at index [%d] = [%d]\n", l, start->n);
		if (start->n == value)
			return (start);
	}
	return (NULL);
}
