#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts node as right child
 * @parent: parent of node
 * @value: value of node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	// if (!parent)
	// 	return (NULL);

	binary_tree_t *node = binary_tree_node(parent, value);

	if (node == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right = node;
		node->right->parent = node;
	}
	else
	{
		parent->right = node;
		node->parent = parent;
	}

	return (node);
}
