#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deleted the head node of a linked list and returns the (n)
 * @head: double pointer to the linked list start
 * Return: deleted value - n
 */

int pop_listint(listint_t **head)
{
	listint_t *hold;
	int n;

	if (head && *head)
	{
		hold = *head;
		n = (**head).n;
		*head = (**head).next;
		free(hold);
		return (n);
	}
	return (0);
}
