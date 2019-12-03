#include "binary_trees.h"


/**
  * binary_tree_leaves - counts the leaves in a binary tree
  * @tree: binary tree
  * Return: number of leaves
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lSize = 0, rSize = 0;

	if (!tree)
		return (0);
	else if (tree->left || tree->right)
	{
		lSize = binary_tree_leaves(tree->left);
		rSize = binary_tree_leaves(tree->right);
		return (0 + lSize + rSize);
	}
	else
		return (1 + lSize + rSize);
}

/**
 * binary_tree_size - binary tree size
 * @tree: binary tree
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{       
	size_t lSize = 0, rSize = 0;

	if (!tree)
		return (0);
	else
	{
		lSize = binary_tree_size(tree->left);
		rSize = binary_tree_size(tree->right);
		return (1 + lSize + rSize);
	}
}

/**
  * binary_tree_is_perfect - check if binary tree is full
  * @tree: binary tree
  * Return: 1 if full 0 if not
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t size, leaves;

	size = binary_tree_size(tree);
	leaves = binary_tree_leaves(tree);
	if (leaves == (size / 2 + 1))
		return (1);
	return (0);
}
