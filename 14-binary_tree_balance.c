#include "binary_trees.h"
/**
 * binary_tree_balance - count of nodes
 * @tree: root node
 * Return: 0 if leaf
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return ((int)binary_tree_height(tree->left)
		- (int)binary_tree_height(tree->right));
}

/**
 * binary_tree_height - Finds height of tree
 * @tree: Tree to check
 * Return: Height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (l < r)
		l = r;
	return (l + 1);
}
