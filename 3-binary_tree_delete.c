#include "binary_trees.h"
/* Task 3 - 0x1D. C - Binary trees */

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: Binary tree to delete
 *
 * Return: a pointer to the new node,
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
