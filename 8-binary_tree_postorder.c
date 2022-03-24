#include "binary_trees.h"
/* Task 6 - 0x1D. C - Binary trees */

/**
 * binary_tree_postorder - Goes through a binary tree using post-order traversal
 * @tree: Binary tree to go trough
 * @func: Funtion to use
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
	func(tree->n);
}
