#include "binary_trees.h"


/**
  * binary_tree_delete - deletes a binary tree
  * @tree: binary tree
  */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree->left)
		binary_tree_delete(tree->left);
	if (tree->right)
		binary_tree_delete(tree->right);
	if (tree)
		free(tree);
}
