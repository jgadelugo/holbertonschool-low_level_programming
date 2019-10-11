#include "hash_tables.h"
#include <string.h>

/**
  * update_key - update value of key if key exists
  * @h: head of linked list
  * @key: key of node
  * @value: value of node
  * Return: 1 if succesful, 0 if not match, -1 if malloc failed
  */
int update_key(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *copy = *h;
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
hash_node_t *add_node(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *key1, *value1;

	new_node = malloc(sizeof(hash_node_t));
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
  * hash_table_set - adds an element to the hash table
  * @ht: is the hash table you want to add or update the key/value to
  * @key: is the key and can not be an empty string
  * @value: is the value associated with the key (must be duplicated)
  * Return: 1 if it succeeded, 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;
	int update;

	if (*key == '\0')
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
