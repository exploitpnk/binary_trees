#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert new node (left)
 * @parent: ptr to parten
 * @value: new node's value
 *
 * Return: new node or NULL if fails
 **/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	leftnode = binary_tree_node(parent, value);

	if (leftnode == NULL)
	{
		return (NULL);
	}

	if (parent->left)
	{
		leftnode->left = parent->left;
		leftnode->left->parent = leftnode;
	}

	parent->left = leftnode;

	return (leftnode);
}
