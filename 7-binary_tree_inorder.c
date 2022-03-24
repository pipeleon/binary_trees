#include "binary_trees.h"
/* Task 6 - 0x1D. C - Binary trees */

/**
 * binary_tree_inorder - Goes through a binary tree using  in-order traversal
 * @tree: Binary tree to go trough
 * @func: Funtion to use
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
