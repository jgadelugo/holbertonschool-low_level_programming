#include "binary_trees.h"

/**
  * binary_trees_ancestor - find the lowest common ancestor
  * @f: first node
  * @s: second node
  * Return: pointer to most common ancestor or NULL
  */
binary_tree_t *binary_trees_ancestor(const b_t_t *f, const b_t_t *s)
{
	b_t_t *s1;

	if (!f || !s || (!s->parent && !s->parent))
		return (NULL);

	while (f)
	{
		s1 = (b_t_t *)s;
		while (s1)
		{
			if (s1->n == f->n)
				return (s1);
			s1 = s1->parent;
		}
		f = f->parent;
	}
	return (NULL);
}
