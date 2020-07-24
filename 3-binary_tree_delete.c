#include "binary_trees.h"
/**
 * binary_tree_delete - delete complete binary tree
 * @tree: tree to be deleted
 *
 * Return: N/A
 **/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}

	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
