#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees list_t
 * @head: linked list , list_t
 */

void free_list(list_t *head)
{
	list_t *hold;

	while (head != NULL)
	{
		hold = head;
		head = head->next;
		free(hold->str);
		free(hold);
	}
}
