#include "binary_trees.h"


/**
  * binary_tree_delete - deletes a binary tree
  * @tree: binary tree
  */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	if (tree)
		func(tree->n);
}
