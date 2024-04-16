#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of node
 * @node: pointer to node to check for uncle
 *
 * Return: pointer to uncle node, NULL if failure or node is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
		node->parent->parent == NULL)
	{
		return (NULL);
	}

	return (binary_tree_sibling(node->parent));
}

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
