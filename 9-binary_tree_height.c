#include "binary_trees.h"

/**
 * binary_tree_height - wrapper for binary_proper_height
 * @tree: root of tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (binary_proper_height(tree));
}

/**
 * binary_proper_height - find height of binary tree
 * @tree: root of tree
 * Return: height of tree
 */
size_t binary_proper_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (-1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return ((left > right ? left : right) + 1);
}
