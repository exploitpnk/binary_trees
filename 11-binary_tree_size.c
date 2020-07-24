#include "binary_trees.h"
/**
 * binary_tree_size - get size of tree
 * @tree: ptr to node
 *
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_size;

	if (tree == NULL)
	{
		return (0);
	}
	tree_size = height_add(tree) + 1;

	return (tree_size);
}
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
