#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent of node
 * @value: Value to put in the new node
 * Return: If error - NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
