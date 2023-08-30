#include "binary_trees.h"

/**
 * binary_tree_sibling - A function that finds the sibling of a node.
 *@node: A pointer to the node to find the sibling.
 * Return: A pointer to the sibling node otherwise, 0
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);

}
