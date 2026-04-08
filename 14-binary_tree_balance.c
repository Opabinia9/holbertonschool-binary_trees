#include "binary_trees.h"

/**
 * binary_tree_height_2 - find height of tree
 * @tree: root of tree
 * Return: height of tree
 */
size_t binary_tree_height_2(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
		lheight = 0;
	else
		lheight = binary_tree_height_2(tree->left);

	if (tree->right == NULL)
		rheight = 0;
	else
		rheight = binary_tree_height_2(tree->right);

	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}


/**
 * binary_tree_balance - find balance of binary tree
 * @tree: root of tree
 * Return: balance of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight, rheight;

	if (tree == NULL)
		return (0);

	lheight = binary_tree_height_2(tree->left);
	rheight = binary_tree_height_2(tree->right);

	return (lheight - rheight);
}
