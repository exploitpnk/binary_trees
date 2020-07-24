#include "binary_trees.h"
/**
 * binary_tree_height - height of a binary tree
 * @tree: ptr to root
 *
 * Return: tree's height or 0 if tree is NULL
 **/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_rigth = 0;
	size_t height_left = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right)
	{
		height_rigth = 1 + binary_tree_height(tree->right);
	}

	if (tree->left)
	{
		height_left = 1 + binary_tree_height(tree->left);
	}

	if (height_left > height_rigth)
	{
		return (height_left);
	}

	return (height_rigth);
}
