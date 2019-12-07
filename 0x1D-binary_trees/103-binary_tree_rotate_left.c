#include "binary_trees.h"
/**
 * binary_tree_rotate_left - rotate binary tree left.
 * @tree: binary tree root/node.
 * Return: a pointer to the new root node.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *y;
	binary_tree_t *x = tree;

	if (!tree || !tree->right)
		return (NULL);

	y = tree->right;
	x->right = y->left;
	if (y->left)
		y->left->parent = x;
	y->parent = x->parent;
	if (!x->parent)
		tree = y;
	else if (x == x->parent->left)
		x->parent->left = y;
	else
		x->parent->right = y;
	y->left = x;
	x->parent = y;
	return (tree);
}
