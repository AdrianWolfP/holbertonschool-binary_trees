#include "binary_trees.h"
/**
 * binary_tree_nodes - count of nodes
 * @tree: Root node
 * Return: 0 if leaf, sum of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if ((!tree->right) && (!tree->left))
		return (0);
	return (binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right) + 1);
}
