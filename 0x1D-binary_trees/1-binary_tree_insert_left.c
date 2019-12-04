#include "binary_trees.h"

/**
  * create_node - creates the basic values of a node
  * @value: n value for node
  * Return: new node
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
  * binary_tree_insert_left - insert to the left of a binary tree
  * @parent: parent of node to insert
  * @value: value for n in node
  * Return: new node
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
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
