#include "binary_trees.h"

/**
  * is_full - checks if tree is full
  * @tree: tree to check
  * Return: 1 if true 0 if falls
  */
int is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
		return (is_full(tree->left) && is_full(tree->right));
	return (0);

}

/**
  * binary_tree_is_full - check if binary tree is full
  * @tree: binary tree
  * Return: 1 if full 0 if not
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_full(tree));
}
