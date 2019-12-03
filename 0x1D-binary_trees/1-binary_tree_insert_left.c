#include "binary_trees.h"

/**
  *
  *
  *
  */
binary_tree_t *create_node(int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}


/**
  *
  *
  *
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = create_node(value);
	if (!new)
		return (NULL);
	if (parent && parent->left)
		while (parent->left)
		{
			if (parent->left->n < value)
			{
				parent->left->parent = new;
				break;
			}
			parent = parent->left;
		}
	new->parent = parent;
	new->left = parent->left;
	parent->left = new;
	return (new);
}
