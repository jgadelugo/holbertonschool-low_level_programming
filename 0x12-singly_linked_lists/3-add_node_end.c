#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - size of string
 * @str: string to get size of
 * Return: size of string
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: struct list_t, node
 * @str: needs to be duplicated
 * Return: new list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	char *string = strdup(str);

	if (!string)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(string);
		return (NULL);
	}

	new->str = string;
	new->len = _strlen(string);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	for (last = *head; last->next != NULL; last = last->next)
		;

	last->next = new;
	return (new);
}
