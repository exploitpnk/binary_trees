#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: ptr to the node to find the uncle
 *
 * Return: ptr to the uncle node
 **/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || (node->parent) == NULL)
	{
		return (NULL);
	}

	return (binary_tree_sibling(node->parent));
}
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: ptr to node
 *
 * Return: ptr to sibling
 **/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *root;

	root = NULL;

	if (node == NULL || (node->parent) == NULL)
	{
		return (NULL);
	}

	root = node->parent;

	if (root->left && (root->left != node))
	{
		return (root->left);
	}
	else if (root->right && (root->right != node))
	{
		return (root->right);
	}
	return (NULL);
}
