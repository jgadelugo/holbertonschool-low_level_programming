#include "binary_trees.h"

/**
  * create_nodei - creates node with base values
  * @value: value for new node
  * Return: new node
  */
binary_tree_t *crate_node(int value)
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
  * binary_tree_insert_right - insert at the right 
  * @parent: parent node
  * @value: value for new node
  * Return: new node or NULL if fails
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = crate_node(value);
	if (!new)
		return (NULL);
	if (parent && parent->right)
		while (parent->right)
		{
			if (parent->right->n > value)
			{
				parent->right->parent = new;
				break;
			}
			parent = parent->right;
		}
	new->parent = parent;
	new->right = parent->right;
	parent->right = new;
	return (new);
}
