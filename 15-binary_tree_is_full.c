#include "binary_trees.h"
/**
 * binary_tree_is_full - check tree is full
 * @tree: Pointer to root node
 * Return: True if tree is full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree || ((!tree->left) != (!tree->right)))
		return (0);
	if (tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (1);
}
