#include "binary_trees.h"

/**
  * crate_node - creates node with base values
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

	if (!parent)
		return (NULL);

	new = crate_node(value);
	if (!new)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = new;
		new->right = parent->right;
	}

	new->parent = parent;
	parent->right = new;

	return (new);
}
