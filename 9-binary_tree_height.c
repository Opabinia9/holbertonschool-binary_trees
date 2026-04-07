#include "binary_trees.h"

/**
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree == NULL)
		return 0;

	if (tree->left == NULL && tree->right == NULL)
		return 0;

	l = 1 + binary_tree_height(tree->left);
	r = 1 + binary_tree_height(tree->right);
	if (l < r)
		return (l);
	else
		return (r);
}
