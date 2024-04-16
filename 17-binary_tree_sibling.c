#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of node
 * @node: pointer to node to check for sibling
 *
 * Return: pointer to sibling node, NULL if failure or parent/node is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
