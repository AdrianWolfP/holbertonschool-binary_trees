#include "binary_trees.h"
/**
 * binary_tree_preorder - function goes though binary tree
 *				using pre-order traversal
 * @tree: Pointer to root node of tree
 * @func: Pointer to function to call for each node
 *		in node passed as a param to this function
 * Return: Void, if tree or node NULL
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
