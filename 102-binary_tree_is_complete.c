#include "binary_trees.h"
/* Task 102 - 0x1D. C - Binary trees */

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
 * check_complete - check completition
 * @tree: Binary tree to go trough
 * @level: Level
 *
 * Return: void
 */
int check_complete(const binary_tree_t *tree, int size, int index)
{
	if (tree == NULL)
		return (1);
	if (index >= size)
		return (0);
	
	return (min_value(check_complete(tree->left, size, 2 * index + 1), 
		check_complete(tree->right, size, 2 * index + 2)));
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: Binary tree to go trough
 *
 * Return: 1 if true 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int i, size_tree;

	if (tree == NULL)
	{
		return (0);
	}

	size_tree = binary_tree_size(tree);
	i = 0;
	
	return (check_complete(tree, size_tree, i));
}
