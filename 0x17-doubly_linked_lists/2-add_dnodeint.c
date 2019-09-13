#include "lists.h"
#include <stdlib.h>
/**
  * add_dnodeint - add node to the beginning of a dlistint_t list
  * @head: beginning of dlistint_t
  * @n: Value to insert into node
  * Return: address of the new element or NULL if it failed
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
