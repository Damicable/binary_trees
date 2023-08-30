#include "binary_trees.h"
/**
 * binary_tree_insert_left - This function inserts a node as the left-child
 *@parent: A pointer to the node to insert the left-child in.
 *@value: Value to store in the new node.
 * Return: A pointer to the created node, or NULL on failure and parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->left == NULL)
		parent->left = node;
	else
	{
		node->left = parent->left;
		parent->left = node;
		node->left->parent = node;
	}
	return (node);
}
