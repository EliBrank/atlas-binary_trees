#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of tree to measure
 *
 * Return: height of binary tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	/* height is 0 in case of single node or empty tree */
	if (tree == NULL || (tree->left == 0 && tree->right == 0))
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if (h_left > h_right)
		return (1 + h_left);
	else
		return (1 + h_right);
}
