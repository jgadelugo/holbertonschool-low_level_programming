#include "binary_trees.h"

/**
  * array_to_bst - create bst out of array
  * @array: array
  * @size: size of array
  * Return: root of bst or null
  */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i = 0;

	if (!array || !size)
		return (NULL);
	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);
	return (root);
}
