#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right
 *				child of another node
 * @parent: Pointer to node to insert right child
 * @value: Value to store in the right child node
 * Return: Pointer to node, or NULL if failed
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);

	right_child = binary_tree_node(parent, value);
	if (right_child == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		right_child->right = parent->right;
		parent->right->parent = right_child;
	}
	parent->right = right_child;

	return (right_child);
}
