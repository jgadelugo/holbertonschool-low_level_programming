#include "binary_trees.h"


/**
  * get_depth - gets depth of left side
  * @tree: binary tree
  * Return: depth
  */
int get_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}


/**
  * is_perfect - counts the leaves in a binary tree
  * @tree: binary tree
  * @depth: depth of left most side
  * @level: depth of a chain
  * Return: 1 if it is perfect 0 if not
  */
int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (!tree)
		return (1);
	if (!tree->left && !tree->right)
	{
		if (depth == (level + 1))
			return (1);
		return (0);
	}
	if (!tree->left || !tree->right)
		return (0);
	return (is_perfect(tree->right, depth, level + 1) &&
		is_perfect(tree->left, depth, level + 1));
}

/**
  * binary_tree_is_perfect - check if binary tree is full
  * @tree: binary tree
  * Return: 1 if full 0 if not
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	depth = get_depth(tree);

	if (!tree)
		return (0);
	return (is_perfect(tree, depth, 0));
}
