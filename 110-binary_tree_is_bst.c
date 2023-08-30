#include "binary_trees.h"
/**
 * find_node - A function That finds node in a tree
 * @root: The root of the tree to evaluate
 * @node: The node to find
 * Return: 1 if node exits, otherwise 0.
 */
int find_node(binary_tree_t *root, binary_tree_t *node)
{

	if (root == NULL)
		return (0);
	if (node == root)
		return (1);
	if (node->n < root->n)
		return (find_node(root->left, node));
	if (node->n > root->n)
		return (find_node(root->right, node));
	return (0);
}
/**
 * croos_tree - This crosses the tree checking if each node exist correctly
 * @root: The root node of the tree
 * @node: The current node to evaluate
 * Return: 1 if is BST, 0 otherwise
 */
int croos_tree(binary_tree_t *root, binary_tree_t *node)
{
	if (root && node)
	{
		int aux = 0;

		aux = find_node(root, node);
		if (node->left)
			aux &= croos_tree(root, node->left);
		if (node->right)
			aux &= croos_tree(root, node->right);
		return (aux);
	}
	return (0);
}
/**
 * binary_tree_is_bst - This function checks if binary tree is
 * correctly bst tree
 * @tree: The tree to check
 * Return: 1 if is bst 0 if not
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (croos_tree((binary_tree_t *)tree, (binary_tree_t *)tree));
}
