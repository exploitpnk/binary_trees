#include "binary_trees.h"
/**
 * binary_tree_balance - balance of binary tree
 * @tree: ptr to root node
 *
 * Return: balance
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_rigth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		height_left = tree_balance(tree->left) + 1;
	}
	if (tree->right)
	{
		height_rigth = tree_balance(tree->right) + 1;
	}

	return (height_left - height_rigth);
}
/**
 * tree_balance - heigth tree
 * @tree: ptr to tree
 *
 * Return: heigth
 **/
size_t tree_balance(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_rigth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		height_left = tree_balance(tree->left) + 1;
	}

	if (tree->right)
	{
		height_rigth = tree_balance(tree->right) + 1;
	}

	if (height_left > height_rigth)
	{
		return (height_left);
	}
	return (height_rigth);
}
