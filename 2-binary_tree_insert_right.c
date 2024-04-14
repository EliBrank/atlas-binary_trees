#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right child of another node
 * @parent: pointer to parent, to insert right child in
 * @value: value to assign to new node
 *
 * Return: pointer to created node, NULL if failure/parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right = NULL;

	/* MALLOC ALERT */
	new_right = malloc(sizeof(binary_tree_t));

	if (new_right == NULL)
	{
		return (NULL);
	}

	new_right->n = value;
	new_right->left = NULL;
	new_right->right = NULL;
	new_right->parent = NULL;

	if (parent != NULL)
	{
		new_right->parent = parent;
		if (parent->right != NULL)
		{
			new_right->right = parent->right;
			new_right->right->parent = new_right;
		}
		parent->right = new_right;
	}

	return (new_right);
}
