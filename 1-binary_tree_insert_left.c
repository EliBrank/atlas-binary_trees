#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts node as left child of another node
 * @parent: pointer to parent, to insert left child in
 * @value: value to assign to new_left node
 *
 * Return: pointer to created node, NULL if failure/parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left = NULL;

	/* MALLOC ALERT */
	new_left = malloc(sizeof(binary_tree_t));

	if (new_left == NULL)
	{
		return (NULL);
	}

	new_left->n = value;
	new_left->left = NULL;
	new_left->right = NULL;
	new_left->parent = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	else
	{
		new_left->parent = parent;
		if (parent->left != NULL)
		{
			new_left->left = parent->left;
			new_left->left->parent = new_left;
		}
		parent->left = new_left;
	}

	return (new_left);
}
