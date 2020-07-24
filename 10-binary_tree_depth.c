#include "binary_trees.h"
/**
 * binary_tree_depth - get the depth of binary tree
 * @tree: ptr to node
 *
 * Return: depth of tree
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_tree = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent)
	{
		depth_tree = binary_tree_depth(tree->parent) + 1;
	}

	return (depth_tree);
}
