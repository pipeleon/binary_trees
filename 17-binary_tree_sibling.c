#include "binary_trees.h"
/* Task 17 - 0x1D. C - Binary trees */

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: Node to check
 *
 * Return: pointer to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	tmp = node->parent;
	if (tmp->left == NULL || tmp->right == NULL)
	{
		return (NULL);
	}
	if (tmp->left->n == node->n)
	{
		return (tmp->right);
	}
	else
	{
		return (tmp->left);
	}
}
