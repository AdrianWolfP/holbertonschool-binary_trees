#include "binary_trees.h"
/**
 * binary_tree_inorder - function goes though
 *			binary tree using in-order traversal
 * @tree: Pointer to root node of tree
 * @func: Pointer to function to call each node
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
