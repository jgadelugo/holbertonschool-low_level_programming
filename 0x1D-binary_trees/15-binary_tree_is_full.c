#include "binary_trees.h"

/**
  * is_full - checks if tree is full
  * @tree: tree to check
  * Return: 1 if true 0 if falls
  */
i

/**
  * binary_tree_is_full - check if binary tree is full
  * @tree: binary tree
  * Return: 1 if full 0 if not
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t size, leaves;

	size = binary_tree_size(tree);
	leaves = binary_tree_leaves(tree);
	if (leaves == (size / 2 + 1))
		return (1);
	return (0);
}
