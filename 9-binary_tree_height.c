#include "binary_trees.h"
/* Task 9 - 0x1D. C - Binary trees */

/**
 * max_value - max value
 * @a: First
 * @b: Second
 *
 * Return: max value
 */
size_t max_value(size_t a, size_t b)
{
	if (a > b)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: Binary tree to go trough
 *
 * Return: height of the node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		return (0);
	}
	height = 1
		+ max_value(binary_tree_height(tree->left), binary_tree_height(tree->right));

	return (height);
}
