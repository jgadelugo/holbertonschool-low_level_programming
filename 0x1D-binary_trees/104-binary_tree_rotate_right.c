#include "binary_trees.h"
/**
 * binary_tree_rotate_right - rotate binary tree right.
 * @tree: binary tree root/node.
 * Return: a pointer to the new root node.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *y = tree;
	binary_tree_t *x;

	if (!tree || !tree->left)
		return (NULL);

	x = y->left;
	y->left = x->right;
	if (x->right)
		x->right->parent = y;
	x->parent = y->parent;
	if (!y->parent)
		tree = x;
	else if (y == y->parent->right)
		y->parent->right = x;
	else
		y->parent->left = x;
	x->right = y;
	y->parent = x;
	return (tree);
}
