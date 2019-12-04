#include "binary_trees.h"

/**
  * binary_tree_sibling - find the sibling of a node
  * @node: node to find sibling of
  * Return: pointer to sibling if not NULL
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->n < node->parent->n)
		return (node->parent->right);
	return (node->parent->left);
}
