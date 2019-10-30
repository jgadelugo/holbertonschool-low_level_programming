#include "sort.h"

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
 * insertion_sort_list - sorts a doubly linked list with insertion sort algorithm
 * @list: pointer to doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *temp;

	current = current->next;

	while (current)
	{
		temp = current;
		while (temp)
		{
			if (temp->n > current->n)
			{
				swap(list, temp, current);
				print_list(*list);
			}
			temp = temp->prev;
		}
		current = current->next;
	}

}
