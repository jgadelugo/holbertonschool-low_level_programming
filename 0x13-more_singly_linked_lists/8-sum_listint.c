#include "lists.h"

/**
 * sum_listint - sume of all the data (n) of a linked list
 * @head: start of linked list
 * Return: sum of all the data (n) values
 */
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; head = (*head).next)
		sum += (*head).n;

	return (sum);
}
