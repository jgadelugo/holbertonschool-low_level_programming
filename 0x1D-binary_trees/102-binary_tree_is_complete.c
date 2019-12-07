#include "binary_trees.h"
/**
 * count_nodes - counts the number of nodes inside the tree.
 * @tree: binary tree node.
 * Return: number of nodes in the tree.
 */
int count_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}
/**
 * is_complete - function that checks if tree is complete.
 * @tree: binary tree node.
 * @index: index of the tree.
 * @n: number of nodes.
 * Return: 1 on success 0 on failure.
 */
int is_complete(const binary_tree_t *tree, int index, int n)
{
	if (!tree)
		return (1);
	if (index >= n)
		return (0);
	return (is_complete(tree->left, (2 * index) + 1, n) &&
	       is_complete(tree->right, (2 * index) + 2, n));
}
/**
 * binary_tree_is_complete - checks if binary tree is complete.
 * @tree: binary tree node.
 * Return: 1 on success 0 on failure.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_complete(tree, 0, count_nodes(tree)));
}
