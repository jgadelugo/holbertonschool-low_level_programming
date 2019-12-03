#include "binary_trees.h"

/**
  * binary_tree_is_leaf - check if node is the root
  * @node: node to check
  * Return: 1 if node is the root otherwise 0
  */


int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
