#include "binary_trees.h"
/**
 * binary_tree_is_leaf - verify if node is a leaf
 * @node: ptr to node to verify
 *
 * Return: 1 if is a leaf
 **/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if ((node->right) == NULL && (node->left) == NULL)
	{
		return (1);
	}

	return (0);
}
