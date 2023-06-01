#include "binary_trees.h"
/**
 * binary_tree_preorder - traverses the binary tree
 * @tree: binary tree
 * @func: function to be performed on tree
 * Return: 1 (if node is a root) 0 (if not)
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
