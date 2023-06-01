#include "binary_trees.h"
/**
 * binary_tree_inorder - traverses the binary tree
 * @tree: binary tree
 * @func: function to be performed on tree
 * Return: 1 (if node is a root) 0 (if not)
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
