#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if node is root
 * @node: Pointer to the node to check
 * Return: 1 if function is root, 0 if fail, 0 if NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent != NULL)
		return (0);

	return (1);
}
