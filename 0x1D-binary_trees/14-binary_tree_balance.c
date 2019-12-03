#include "binary_trees.h"

/**
  * binary_tree_height - get height from binary tree
  * @tree: tree to search
  * Return: height
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lSize = 0, rSize = 0;

	if (!tree)
		return (0);
	else if (tree->left || tree->right)
	{
		lSize = binary_tree_height(tree->left);
		rSize = binary_tree_height(tree->right);
		if (lSize > rSize)
			return (lSize + 1);
		return (rSize + 1);
	}
	else
		return (0);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	int rHeight = 0, lHeight =0;

	if (tree->left)
		lHeight = binary_tree_height(tree->left) + 1;
	if (tree->right)
		rHeight = binary_tree_height(tree->right) + 1;
	return (lHeight - rHeight);
}
