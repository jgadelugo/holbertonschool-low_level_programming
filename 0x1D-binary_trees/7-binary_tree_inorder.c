#include "binary_trees.h"


/**
  * binary_tree_delete - deletes a binary tree
  * @tree: binary tree
  */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->left)
		binary_tree_inorder(tree->left, func);
	if (tree)
		func(tree->n);
	if (tree->right)
		binary_tree_inorder(tree->right, func);
}
