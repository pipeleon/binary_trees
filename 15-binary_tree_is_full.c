#include "binary_trees.h"
/* Task 15 - 0x1D. C - Binary trees */

/**
 * min_value - min value
 * @a: First
 * @b: Second
 *
 * Return: min value
 */
size_t min_value(size_t a, size_t b)
{
	if (a > b)
	{
		return (b);
	}
	else
	{
		return (a);
	}
}

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: Node to check
 *
 * Return: 1 if true 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: Binary tree to go trough
 *
 * Return: 1 if full 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full, a, b;

	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_is_leaf(tree) == 1)
	{
		return (1);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	a = binary_tree_is_full(tree->left);
	b = binary_tree_is_full(tree->right);
	full = min_value(a, b);	

	return (full);
}
