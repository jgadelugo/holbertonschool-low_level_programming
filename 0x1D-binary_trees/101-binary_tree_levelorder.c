#include "binary_trees.h"


/**
  * binary_tree_delete - deletes a binary tree
  * @tree: binary tree
  */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	else if (tree->left || tree->right)
	{
		binary_tree_nodes(tree->left);
		binary_tree_nodes(tree->right);
	}
	else
}
