#include "binary_trees.h"

/**
  * binary_tree_node - create a binary tree
  * @parent: parent of the new node
  * @value: n of the new node
  * Return: new node
  */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	/* check if malloc failed*/
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
