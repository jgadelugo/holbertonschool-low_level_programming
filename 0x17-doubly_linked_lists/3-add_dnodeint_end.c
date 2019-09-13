#include "lists.h"
#include <stdlib.h>
/**
  * add_dnodeint_end - add node to the end of a dlistint_t list
  * @head: beginning of dlistint_t
  * @n: Value to insert into node
  * Return: address of the new element or NULL if it failed
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *hold = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	while (hold && hold->next)
		hold = hold->next;

	new->n = n;
	new->next = NULL;
	new->prev = hold;

	if (!*head)
		*head = new;

	if (hold)
		hold->next = new;

	return (new);
}
