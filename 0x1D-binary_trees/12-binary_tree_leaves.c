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
