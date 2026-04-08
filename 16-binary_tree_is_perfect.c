#include "binary_trees.h"

#include "binary_trees.h"

/**
 * is_perfect- checks if a tree is full, and all leaves match input depth
 * @tree: tree to check
 * @level: current level of the node at *tree
 * @depth: max depth of tree
 * Return: 1 for perfect, else 0
 */

int is_perfect(const binary_tree_t *tree, size_t level, size_t depth)
{
	int left, right;

	if (!tree->left && !tree->right)
		return (level + 1 == depth);
	if (!tree->left || !tree->right)
		return (0);
	left = is_perfect(tree->left, level + 1, depth);
	right = is_perfect(tree->right, level + 1, depth);
	return (left && right);
}

/**
 * binary_tree_is_perfect- checks if a binary tree is perfect
 * @tree: pointer to the root node of tree to check
 * Return: 1 if true, else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t level = 0, depth = 1;
	binary_tree_t *tmp;

	if (!tree)
		return (0);

	tmp = (binary_tree_t *)tree;
	while (tmp->left)
	{
		depth++;
		tmp = tmp->left;
	}

	return (is_perfect(tree, level, depth));
}
