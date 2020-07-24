#include "binary_trees.h"
/**
 * binary_tree_nodes - count nodes
 * @tree: ptr to root node
 *
 * Return: node numbers
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count;

	node_count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right || tree->left)
	{
		node_count = 1;
	}

	if (tree->right)
	{
		node_count = node_count + binary_tree_nodes(tree->right);
	}

	if (tree->left)
	{
		node_count = node_count + binary_tree_nodes(tree->left);
	}
	return (node_count);
}
