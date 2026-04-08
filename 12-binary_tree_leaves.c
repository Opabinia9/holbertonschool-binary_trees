#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves of a tree
 * @tree: root node
 * Return: number of leave nodes
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t c = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	c += binary_tree_leaves(tree->left);
	c += binary_tree_leaves(tree->right);

	return (c);
}
