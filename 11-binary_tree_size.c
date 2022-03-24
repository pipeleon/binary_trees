#include "binary_trees.h"
/* Task 11 - 0x1D. C - Binary trees */

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: Binary tree to go trough
 *
 * Return: Size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size, a, b;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}
	a = binary_tree_size(tree->left);
	b = binary_tree_size(tree->right);
	tree_size = 1 + a + b;

	return (tree_size);
}
