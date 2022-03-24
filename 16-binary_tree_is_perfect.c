#include "binary_trees.h"
/* Task 16 - 0x1D. C - Binary trees */

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

/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 * @tree: Binary tree to go trough
 *
 * Return: count
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int factor, tree_size, perfect, i;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right)
	{
		return (1);
	}

	factor = binary_tree_height(tree);
	tree_size = binary_tree_size(tree);
	perfect = 1;
	for (i = 0; i < factor; i++)
	{
		perfect = perfect * 2;
	}
	perfect--;
	if (perfect == tree_size)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (factor);
}
