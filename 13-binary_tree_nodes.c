#include "binary_trees.h"
/* Task 12 - 0x1D. C - Binary trees */

/**
 * binary_tree_is_parent - checks if a node is a leaf
 * @node: Node to check
 *
 * Return: 1 if true 0 otherwise
 */
int binary_tree_is_parent(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: Binary tree to go trough
 *
 * Return: count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count, a, b;

	if (tree == NULL)
	{
		return (0);
	}

	a = binary_tree_nodes(tree->left);
	b = binary_tree_nodes(tree->right);
	count = binary_tree_is_parent(tree) + a + b;

	return (count);
}
