#include "binary_trees.h"
/**
 * binary_tree_size - finds the size of a tree
 * @tree: pointer to root node
 * Return: sixze of pointer (if node is a root) 0 (tree is null)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree)
	{
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}

	return (size + 1);
}
