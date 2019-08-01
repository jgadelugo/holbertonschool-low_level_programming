#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees list_t
 * @head: linked list , list_t
 */

void free_list(list_t *head)
{
	list_t *hold;

	for (hold = head; !head; head = hold->next)
	{
		free(head->str);
		free(head);
	}
}
