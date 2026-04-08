#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: root of tree
 * Return: 1 if full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (left && right)
		return (1);
	else
		return (0);
}
