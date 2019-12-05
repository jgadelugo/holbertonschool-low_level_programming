#include "binary_trees.h"


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
	lSize = binary_tree_size(tree->left);
	rSize = binary_tree_size(tree->right);
	return (1 + lSize + rSize);
}
