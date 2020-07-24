#include "binary_trees.h"
/**
 * binary_tree_node - create binary tree
 * @parent: ptr to parent
 * @value: new node's value
 *
 * Return: new node or NULL if fails
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	int size;

	binary_tree_t *new_node = NULL;

	size = sizeof(binary_tree_t);

	new_node = malloc(size);

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = NULL;
	new_node->n = value;
	return (new_node);
}
