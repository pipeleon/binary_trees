#include "binary_trees.h"
/* Task 4 - 0x1D. C - Binary trees */

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: Node to check
 *
 * Return: 1 if true 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
