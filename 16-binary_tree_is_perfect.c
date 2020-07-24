#include "binary_trees.h"
/**
 * perfect_tree - test if tree is full
 * @node: node to check
 * @lvl: init level
 * @depth: depth
 *
 * Return: 1 if full
 **/
int perfect_tree(const binary_tree_t *node, int depth, int lvl)
{
	size_t left;
	size_t right;

	if (!node)
	{
		return (0);
	}
	if (!(node->left) && (!node->right))
	{
		return (depth == lvl + 1);
	}
	if (!(node->left) || (!node->right))
	{
		return (0);
	}

	left = perfect_tree(node->left, depth, lvl + 1);
	right = perfect_tree(node->right, depth, lvl + 1);
	return (left && right);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: ptr to root node
 * Return: 1 perfect, 0 NULL
 **/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	depth = left_depth(tree);

	return (perfect_tree(tree, depth, 0));
}
/**
 * left_depth - depth of left nodes
 * @node: node to be tested
 *
 * Return: depth of node
 **/
int left_depth(const binary_tree_t *node)
{
	int depth;

	depth = 0;

	while (node)
	{
		depth++;
		node = node->left;
	}
	return (depth);
}
