#include "lists.h"
/**
 * sum_dlistint - count all the elements of a dlistint_t list
 * @head: start of doubly linked list
 * Return: the sum of the n value of each node
 */

int sum_dlistint(dlistint_t *head)
{
	size_t sum;

	for (sum = 0; head; head = head->next)
		sum += head->n;
	return (sum);
}
