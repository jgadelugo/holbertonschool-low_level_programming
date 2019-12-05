#include "binary_trees.h"

/**
  * b_t_height - get height from binary tree
  * @tree: tree to search
  * Return: height
  */
int b_t_height(const b_t_t *tree)
{
	int lSize = 0, rSize = 0;

	if (!tree)
		return (0);
	else if (tree->left || tree->right)
	{
		lSize = b_t_height(tree->left);
		rSize = b_t_height(tree->right);
		if (lSize > rSize)
			return (lSize + 1);
		return (rSize + 1);
	}
	else
		return (0);
}
/**
 * print_level - prints one level at a time
 * @tree: root of tree
 * @func: function that prints
 * @level: level to use func on
 */
void print_level(const b_t_t *tree, void (*func)(int), int level)
{
	if (!tree)
		return;
	if (level == 1)
		func(tree->n);
	else
	{
		print_level(tree->left, func, level - 1);
		print_level(tree->right, func, level - 1);
	}
}
/**
 * binary_tree_levelorder - use function in levelorder traversal
 * @tree: binary tree
 * @func: function
 */
void binary_tree_levelorder(const b_t_t *tree, void (*func)(int))
{
	int lvl = 0, height;

	if (!tree || !func)
		return;
	height = b_t_height(tree);
	while (lvl <= height)
		print_level(tree, func, ++lvl);
}
