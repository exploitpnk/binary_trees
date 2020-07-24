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
