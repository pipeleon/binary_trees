#include "binary_trees.h"
/* Task 5 - 0x1D. C - Binary trees */

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: Node to check
 *
 * Return: 1 if true 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
