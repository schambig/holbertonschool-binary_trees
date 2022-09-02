#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 * Return: Number of nodes with at least 1 child, if tree is NULL return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->right || tree->left)
		return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1);

	return (0);
}
