#include "binary_trees.h"

/**
 * binary_tree_size - find the number of nodes in a binary tree
 * @tree: root of binary tree
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 1;

	if (tree == NULL)
		return (0);
	s += binary_tree_size(tree->left);
	s += binary_tree_size(tree->right);

	return (s);
}
