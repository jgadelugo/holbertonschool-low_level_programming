#include "binary_trees.h"

/**
  * insert_bst - insert bst value
  * @tree: root of bst
  * @value: value to insert
  * Return: add value or null if fails
  */
bst_t *insert_bst(bst_t *tree, int value)
{
	bst_t *parent = NULL;

	while (tree && tree->n != value)
	{
		parent = tree;
		if (tree->n > value)
			tree = tree->left;
		else if (tree->n < value)
			tree = tree->right;
	}
	if (tree)
		return (NULL);
	return (parent);
}

/**
  * bst_insert - insert into a binary search tree
  * @tree: binary tree root
  * @value: value to insert
  * Return: created node or NULL on failure
  */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *parent;

	if (!*tree)
		return (*tree = binary_tree_node(NULL, value));
	parent = insert_bst(*tree, value);
	if (!parent)
		return (NULL);
	if (parent->n > value)
		return (parent->left = binary_tree_node(parent, value));
	return (parent->right = binary_tree_node(parent, value));

}
