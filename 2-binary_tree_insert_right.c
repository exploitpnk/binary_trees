#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert left node
 * @parent: ptr to parent
 * @value: new node's value
 *
 * Return: new node or NULL if fails
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	rightnode = binary_tree_node(parent, value);

	if (rightnode == NULL)
	{
		return (NULL);
	}

	if (parent->right)
	{
		rightnode->right = parent->right;
		rightnode->right->parent = rightnode;
	}

	parent->right = rightnode;

	return (rightnode);
}
