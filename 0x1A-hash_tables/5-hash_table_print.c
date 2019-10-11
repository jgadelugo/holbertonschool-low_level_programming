#include "hash_tables.h"
#include <stdio.h>
/**
  * hash_table_print - print all elements in a hashtable
  * @ht: hash table
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, count = 0;
	hash_node_t *copy;

	if (ht)
	{
		putchar('{');
		for (i = 0; i < ht->size; i++)
		{
			copy = ht->array[i];
			for (; copy; copy = copy->next)
			{
				/* if not the first element print comma and space */
				if (count)
					printf(", ");
				printf("\'%s\': \'%s\'", copy->key, copy->value);
				count++;
			}
		}
		printf("}\n");
	}
}
