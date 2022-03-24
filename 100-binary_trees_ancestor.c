#include "binary_trees.h"
/* Task 100 - 0x1D. C - Binary trees */

/**
 * binary_trees_ancestor -  finds the lowest common ancestor of two nodes
 * @first: First node
 * @second: Second node
 *
 * Return: Depth of the node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *tmp, *tmp2, *tmp3;

	tmp = first->parent;
	tmp2 = second->parent;

	if (tmp->left->n == first->n)
		tmp = tmp->left;
	else
		tmp = tmp->right;
	if (tmp2->left->n == second->n)
		tmp2 = tmp2->left;
	else
		tmp2 = tmp2->right;

	tmp3 = tmp2;

	while (tmp)
	{
		while (tmp2)
		{
			if (tmp->n == tmp2->n)
				return (tmp);
			tmp2 = tmp2->parent;
		}
		tmp = tmp->parent;
		tmp2 = tmp3;
	}

	return (NULL);
}
