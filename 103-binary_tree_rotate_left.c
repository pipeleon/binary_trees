#include "binary_trees.h"
/* Task 103 - 0x1D. C - Binary trees */

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: Binary tree to rotate
 *
 * Return: a pointer to the new root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp, *tmp2, *tmp3;

	if (tree == NULL)
	{
		return (NULL);
	}
	tmp = tree;
	tmp2 = tree->right;
	tmp3 = tmp2->left;
	
	tmp2->left = tmp;
	tmp->right = tmp3;
	tmp->parent = tmp2;
	tmp2->parent = NULL;
	tree = tmp2;

	return (tree);	
}
