#include "binary_trees.h"
#include <limits.h>
/**
  * is_bst - check if binary search tree
  * @tree: binary tree
  * @min: min value
  * @max: max value
  * Return: 1 if it is a bst otherwise 0
  */
int is_bst(const b_t_t *tree, int min, int max)
{
	if (!tree)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);
	return (is_bst(tree->left, min, tree->n - 1) &&
		is_bst(tree->right, tree->n + 1, max));
}
/**
  * binary_tree_is_bst - check if it is a bst
  * @tree: binary tree
  * Return: 1 if it is a bst otherwise 0
  */
int binary_tree_is_bst(const b_t_t *tree)
{
	if (!tree)
		return (0);
	return (is_bst(tree, INT_MIN, INT_MAX));
}
