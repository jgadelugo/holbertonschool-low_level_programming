#include "binary_trees.h"

/**
  * search - find bst value
  * @tree: root of bst
  * @value: value to search
  * Return: node where value is or null
  */
bst_t *search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	while (tree && tree->n != value)
	{
		if (tree->n > value)
			tree = tree->left;
		else if (tree->n < value)
			tree = tree->right;
	}
	return ((bst_t *)tree);
}

/**
  * bst_remove - remove node by value
  * @root: root of bst
  * @value: value to search and delete
  * Return: root
  */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *delete;

	delete = search(root, value);
	if (!delete)
		return (NULL);
	return (root);
}
