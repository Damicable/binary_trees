#include "binary_trees.h"
/**
 * binary_tree_height - This function measures the height of a binary tree.
 *@tree: A pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 0, right = 0;

		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
		if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}
/**
 * binary_tree_size - This function measures the size of a binary tree.
 *@tree: A pointer to the root node of the tree to measure the size.
 * Return: if tree is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t node_left, node_right;

		node_left = binary_tree_size(tree->left);
		node_right = binary_tree_size(tree->right);
		return (1 + node_left + node_right);
	}
}
/**
 * binary_tree_is_perfect - This function checks if a binary tree is perfect.
 *@tree: A pointer to the root node of the tree to check.
 * Return: if tree is NULL, must return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h = 0, perfect_size = 0;

	if (tree == NULL)
		return (0);
	h = binary_tree_height(tree);
	perfect_size = (1 << (h + 1)) - 1;
	if (perfect_size == binary_tree_size(tree))
		return (1);
	else
		return (0);
}
