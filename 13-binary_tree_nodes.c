#include "binary_trees.h"

/**
 * binary_tree_nodes - count the number of non leaf nodes
 * @tree: root node
 * Return: number of non leaf nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t c = 1;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	c += binary_tree_nodes(tree->left);
	c += binary_tree_nodes(tree->right);
	return (c);
}
