#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of binary tree
 * @tree: pointer to the root node of tree to measure balance factor
 *
 * Return: balance factor of bianry tree, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	return (h_left - h_right);
}

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
	if (tree == NULL)
		return (0);

	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);

	if (h_left > h_right)
		return (1 + h_left);
	else
		return (1 + h_right);
}
