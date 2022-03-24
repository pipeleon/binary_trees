#include "binary_trees.h"
/* Task 12 - 0x1D. C - Binary trees */

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
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: Binary tree to go trough
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves, a, b;

	if (tree == NULL)
	{
		return (0);
	}

	a = binary_tree_leaves(tree->left);
	b = binary_tree_leaves(tree->right);
	leaves = binary_tree_is_leaf(tree) + a + b;

	return (leaves);
}
