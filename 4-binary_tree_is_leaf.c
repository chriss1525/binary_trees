#include "binary_trees.h"
/**
 * binary_tree_delete - deletes a binary tree
 * @tree: binary tree
 * Return: nothing
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
