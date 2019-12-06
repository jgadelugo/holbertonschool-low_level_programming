#include "binary_trees.h"

/**
  * bst_search - find bst value
  * @tree: root of bst
  * @value: value to search
  * Return: node where value is or null
  */
bst_t *bst_search(const bst_t *tree, int value);
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
	return (tree);
}
