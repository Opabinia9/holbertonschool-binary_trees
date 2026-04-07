#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a binary tree in preorder
 * @tree: root node
 * @func: function to use on each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
