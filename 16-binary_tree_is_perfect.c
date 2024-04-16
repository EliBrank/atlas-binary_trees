#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to the root node of tree to check
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h = 0;
	int num_leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}

	h = binary_tree_height(tree) - 1;
	num_leaves = binary_tree_leaves(tree);

	if ((binary_tree_balance(tree)) == 0 && (num_leaves == (1 << h)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_balance - measures the balance factor of binary tree
 * @tree: pointer to the root node of tree to measure balance factor
 *
 * Return: balance factor of bianry tree, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (tree == NULL)
	{
		return (0);
	}

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

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of tree to check leaf count
 *
 * Return: number of leaves in binary tree, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
