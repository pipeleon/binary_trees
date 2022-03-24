#include "binary_trees.h"
/* Task 103 - 0x1D. C - Binary trees */

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: Binary tree to rotate
 *
 * Return: a pointer to the new root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp, *tmp2, *tmp3;

	if (tree == NULL)
	{
		return (NULL);
	}
	tmp = tree;
	tmp2 = tree->left;
	tmp3 = tmp2->right;

	tmp2->right = tmp;
	tmp->left = tmp3;
	tmp->parent = tmp2;
	tmp2->parent = NULL;
	tree = tmp2;

	return (tree);
}
