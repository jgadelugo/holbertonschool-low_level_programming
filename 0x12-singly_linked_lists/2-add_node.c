#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

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
 * add_node - adds a new node at the beginning of a list_t list
 * @head: struct list_t, first node
 * @str: needs to be duplicated
 * Return: number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *string = strdup(str);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = string;
	new->len = _strlen(string);
	new->next = *head;

	*head = new;
	return (new);
}
