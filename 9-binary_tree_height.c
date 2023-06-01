#include "binary_trees.h"
/**
 * binary_tree_height - traverses the binary tree
 * @tree: pointer to root of the tree
 * Return: height of pointer (if node is a root) 0 (tree is null)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h;
	size_t hl;
	size_t hr;

	if (!tree)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (0);
	}

	hl = binary_tree_height(tree->left);
	hr = binary_tree_height(tree->right);

	if (hl > hr)
	{
		h = hl + 1;
	}
	else
	{
		h = hr + 1;
	}

	return (h);
}
