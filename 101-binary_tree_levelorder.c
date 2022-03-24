#include "binary_trees.h"
/* Task 101 - 0x1D. C - Binary trees */

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
 * currentlevel - Goes through a binary tree using level-order traversal
 * @tree: Binary tree to go trough
 * @func: Funtion to use
 * @level: Level
 *
 * Return: void
 */
void currentlevel(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		currentlevel(tree->left, func, level - 1);
		currentlevel(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order traversal
 * @tree: Binary tree to go trough
 * @func: Funtion to use
 *
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int i, height;
	if (tree == NULL || func == NULL)
	{
		return;
	}

	height = binary_tree_height(tree);
	for (i = 1; i <= height; i++)
	{
		currentlevel(tree, func, i);
	}
}
