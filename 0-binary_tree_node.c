#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent node of node to create
 * @value: value to assign to new node
 *
 * Return: pointer to new node, NULL if failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	/* MALLOC ALERT */
	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = NULL;

	if (parent != NULL)
	{
		new->parent = parent;
	}

	return (new);
}
