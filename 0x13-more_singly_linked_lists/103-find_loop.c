#include "lists.h"

/**
 * find_listint_loop - finds the beggining of a loop in a linked list
 * @head: beggining of linked list
 * Return: beggining of loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop1, *loop2;

	while (head && (*head).next)
	{
		loop1 = head;
		loop2 = (*head).next;
		while (loop1 != loop2)
		{
			if (loop1)
				loop1 = (*loop1).next;
			if (loop2)
				loop2 = (*loop2).next;
			if (loop2 == head)
				return (head);
			if (loop2)
				loop2 = (*loop2).next;
			if (loop2 == head)
				return (head);
		}
		head = (*head).next;
	}
	printf("%p, %d\n", (void *)head, head->n);
	return (NULL);
}
