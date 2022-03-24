#include "binary_trees.h"
/* Task 16 - 0x1D. C - Binary trees */

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
	if (a > b)
	{
		full = b;
	}
	else
	{
		full = a;
	}

	return (full);
}

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
	height = 1
		+ max_value(binary_tree_height(tree->left), binary_tree_height(tree->right));

	return (height);
}

/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 * @tree: Binary tree to go trough
 *
 * Return: count
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int factor, full;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right)
	{
		return (1);
	}

	factor = binary_tree_height(tree->left) - binary_tree_height(tree->right);
	full = binary_tree_is_full(tree);

	if (factor == 0 && full == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (factor);
}
