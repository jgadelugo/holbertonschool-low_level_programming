#include "hash_tables.h"

/**
  * hash_table_delete - deletes all elements in a hashtable
  * @ht: hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *copy, *delete;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			copy = ht->array[i];
			while (copy)
			{
				delete = copy;
				copy = copy->next;
				free(delete->key);
				free(delete->value);
				free(delete);
			}
		}
		free(ht->array);
		free(ht);
	}
}
