#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: ptr to root node
 *
 * Return: 1 if binary tree is full
 **/
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t value;

	value = 1;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left && (tree->right) == NULL)
	{
		return (0);
	}

	if (tree->right && (tree->left) == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		value = binary_tree_is_full(tree->left) * value;
	}

	if (tree->right)
	{
		value = binary_tree_is_full(tree->right) * value;
	}
	return (value);
}
