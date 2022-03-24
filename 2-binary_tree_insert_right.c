#include "binary_trees.h"
/* Task 2 - 0x1D. C - Binary trees */

/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 * @parent: Parent of the new node
 * @value: value to store
 *
 * Return: a pointer to the new node,
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *tmp;

	if (parent == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->right == NULL)
	{
		parent->right = new;
	}
	else
	{
		tmp = parent->right;
		parent->right = new;
		tmp->parent = new;
		new->right = tmp;
	}

	return (new);
}
