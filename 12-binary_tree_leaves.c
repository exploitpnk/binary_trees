#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: ptr to root node
 *
 * Return: leaves number
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_number;

	leaves_number = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if ((tree->left) == NULL && (tree->right) == NULL)
	{
		return (1);
	}
	leaves_number = leaves_number + binary_tree_leaves(tree->right);
	leaves_number = leaves_number + binary_tree_leaves(tree->left);
	return (leaves_number);
}
