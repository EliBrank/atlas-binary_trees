#include "binary_trees.h"

int half_node_check(const binary_tree_t *tree);

/**
 * binary_tree_is_full - checks if binary tree is full
 * @tree: pointer to the root node of tree to check
 *
 * Return: 1 if full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (half_node_check(tree) == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

/**
 * half_node_check - checks tree for nodes with a single child
 * @tree: pointer to the root node of tree to check
 *
 * Return: number of nodes with single child
 */
int half_node_check(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left == NULL && tree->right != NULL) ||
		(tree->left != NULL && tree->right == NULL))
	{
		return (1);
	}

	return (half_node_check(tree->left) +
	half_node_check(tree->right));
}
