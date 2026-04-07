#include "binary_trees.h"

/**
 * binary_tree_depth - find the depth of tree
 * @tree: node in tree
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent)
	{
		d++;
		tree = tree->parent;
	}
	return (d);
}
