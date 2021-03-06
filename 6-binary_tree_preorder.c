#include "binary_trees.h"
/* Task 6 - 0x1D. C - Binary trees */

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Binary tree to go trough
 * @func: Funtion to use
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
