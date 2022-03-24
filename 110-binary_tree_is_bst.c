#include "binary_trees.h"
/* Task 102 - 0x1D. C - Binary trees */

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
 * check_bst - check bts
 * @tree: Binary tree to go trough
 * @min: min value
 * @max: max value
 *
 * Return: 1 if true 0 otherwise
 */
int check_bst(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);
	if (tree->n <= min)
		return (0);
	if (tree->n >= max)
		return (0);

	return (min_value(check_bst(tree->left, min, tree->n),
		check_bst(tree->right, tree->n, max)));
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: Binary tree to go trough
 *
 * Return: 1 if true 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (check_bst(tree, 0, 999));
}
