#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the parents in a binary tree
 * @tree: pointer to the root node of tree to check parent count
 *
 * Return: number of parents in binary tree, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	

	return (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
}
