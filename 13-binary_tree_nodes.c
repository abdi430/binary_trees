#include "binary_trees.h"

/**
 * binary_tree_nodes - function that measures
 * the size of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: if tree is NULL, 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int yesid = 0, nicolas = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	if (tree->left)
		yesid = binary_tree_nodes(tree->left);
	if (tree->right)
		nicolas = binary_tree_nodes(tree->right);

	return (1 + yesid + nicolas);
}
