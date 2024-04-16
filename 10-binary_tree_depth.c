#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to check
 *
 * Return: depth of binary tree node, 0 if node is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t h = 0;

	while (tree != NULL && tree->parent != NULL)
	{
		tree = tree->parent;
		h++;
	}

	return (h);
}
