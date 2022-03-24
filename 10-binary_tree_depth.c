#include "binary_trees.h"
/* Task 10 - 0x1D. C - Binary trees */

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: Binary tree to go trough
 *
 * Return: Depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent == NULL)
	{
		return (0);
	}
	depth = 1 + binary_tree_depth(tree->parent);

	return (depth);
}
