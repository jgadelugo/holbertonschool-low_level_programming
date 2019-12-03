#include "binary_trees.h"

/**
  * binary_tree_is_leaf - check if node is a leaf
  * @node: node to check
  * Return: 1 if node is a leaf otherwise 0
  */


int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->left && !node->right)
		return (1);
	return (0);
}
