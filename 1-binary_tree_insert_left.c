#include "binary_trees.h"
/* Task 1 - 0x1D. C - Binary trees */

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: Parent of the new node
 * @value: value to store
 *
 * Return: a pointer to the new node,
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left == NULL)
	{
		parent->left = new;
	}
	else
	{
		tmp = parent->left;
		parent->left = new;
		tmp->parent = new;
		new->left = tmp;
	}

	return (new);
}
