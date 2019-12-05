#include "binary_trees.h"


/**
  * binary_tree_nodes - counts the number of nodes in a tree
  * @tree: binary tree
  * Return: number of nodes
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lSize = 0, rSize = 0;

	if (!tree)
		return (0);
	else if (tree->left || tree->right)
	{
		lSize = binary_tree_nodes(tree->left);
		rSize = binary_tree_nodes(tree->right);
		return (1 + lSize + rSize);
	}
	else
		return (0 + lSize + rSize);
}
