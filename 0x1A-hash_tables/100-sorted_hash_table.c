#include "hash_tables.h"
#include <string.h>
#include <stdio.h>

/**
  * shash_table_create - Creates a hash table
  * @size: the size of the array
  * Return: a pointer to the newly created hash table
  */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_hash_table;

	if (!size)
		return (NULL);

	new_hash_table = malloc(sizeof(shash_table_t));

	if (!new_hash_table)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (!new_hash_table->array)
	{
		free(new_hash_table);
		return (NULL);
	}

	for (; size; size--)
		new_hash_table->array[size - 1] = NULL;

	return (new_hash_table);
}
/**
  * update_key - update value of key if key exists
  * @h: head of linked list
  * @key: key of node
  * @value: value of node
  * Return: 1 if succesful, 0 if not match, -1 if malloc failed
  */
int update_key(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *copy = *h;
	char *value1;

	for (; copy; copy = copy->next)
		if (strcmp(copy->key, key) == 0)
		{
			value1 = strdup(value);
			if (!value1)
				return (-1);
			free(copy->value);
			copy->value = value1;
			return (1);
		}
	return (0);
}

/**
  * add_node - adds a node to the beginning of a linked list hash_node_t
  * @h: head of the linked list
  * @key: key of node
  * @value: value of node
  * Return: new head
  */
shash_node_t *add_node(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *new_node;
	char *key1, *value1;

	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (NULL);
	key1 = strdup(key);
	if (!key1)
	{
		free(new_node);
		return (NULL);
	}
	value1 = strdup(value);
	if (!value1)
	{
		free(new_node);
		free(key1);
		return (NULL);
	}

	new_node->key = key1;
	new_node->value = value1;
	new_node->next = *h;

	*h = new_node;
	return (*h);
}

/**
  * shash_table_set - adds an element to the hash table
  * @ht: is the hash table you want to add or update the key/value to
  * @key: is the key and can not be an empty string
  * @value: is the value associated with the key (must be duplicated)
  * Return: 1 if it succeeded, 0 otherwise
  */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new;
	int update;

	if (!ht || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	update = update_key(&(ht->array[index]), key, value);
	/* update == 0 when no key was found */
	if (update == 0)
	{
		new = add_node(&(ht->array[index]), key, value);
		if (!new)
		{
			return (0);
		}
		ht->array[index] = new;
	}
	/* update == -1 when malloc failed */
	else if (update == -1)
		return (0);
	return (1);
}
/**
  * shash_table_get - Retrieves a value associated with a key
  * @ht: is the hash table
  * @key: is the key to search for
  * Return: value associated with the element or NULL if not found
  */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;

	if (!ht)
		return (NULL);
	node = ht->array[key_index((const unsigned char *)key, ht->size)];
	for (; node; node = node->next)
		if (strcmp(node->key, key) == 0)
			return (node->value);
	return (NULL);
}
/**
 * shash_table_print - prints hash table
 * @ht: is the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i, count = 0;
	shash_node_t *copy;

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
/**
 * shash_table_print_rev - prints table in reverse
 * @ht: is the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i, count = 0;
	shash_node_t *copy;

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
/**
  * shash_table_delete - deletes all elements in a hashtable
  * @ht: hash table
  */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *copy, *delete;

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
