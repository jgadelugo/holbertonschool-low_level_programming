#include "hash_tables.h"
#include <string.h>

/**
  * update_key - update value of key if key exists
  * @key: key of node
  * @value: value of node
  * Return: 1 if succesful, 0 if not match
  */
int update_key(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *copy = *h;

	for (; copy; copy = copy->next)
		if (strcmp(copy->key, key) == 0)
		{
			copy->value = strdup(value);
			return (1);
		}
	return (0);
}

/**
  * add_node - adds a node to the beginning of a linked list hash_node_t
  * @h: head of the linked list
  * @key: key of node
  * @value: value of node
  * Return - new head
  */
hash_node_t *add_node(hash_node_t **h, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node) 
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
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

	if (*key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	if (!update_key(&(ht->array[index]), key, value))
		ht->array[index] = add_node(&(ht->array[index]), key, value);
	return (1);

}
