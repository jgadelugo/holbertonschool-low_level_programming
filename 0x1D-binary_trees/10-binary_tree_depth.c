#include "binary_trees.h"

/**
  * binary_tree_depth - check the depth of a tree
  * @tree: checking
  * Return: depth
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	else if (tree->parent)
	{
		size = binary_tree_depth(tree->parent);
		return (size + 1);
	}
	else
		return (0);
}
