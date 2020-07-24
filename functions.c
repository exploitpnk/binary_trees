#include "binary_trees.h"
/**
 * height_add - heights add of binary trees
 * @tree: ptr to root
 *
 * Return: height
 **/
size_t height_add(const binary_tree_t *tree)
{
	size_t heightadd = 0;
	size_t height_l = 0;
	size_t height_r = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		height_l = height_add(tree->left) + 1;
	}

	if (tree->right)
	{
		height_r = height_add(tree->right) + 1;
	}

	heightadd = height_l + height_r;

	return (heightadd);
}