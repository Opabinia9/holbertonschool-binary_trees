#include "binary_trees.h"

/**
 * binary_tree_height_3 - find height of tree
 * @tree: root of tree
 * Return: height of tree
 */
size_t binary_tree_height_3(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL)
		lheight = 0;
	else
		lheight = binary_tree_height_3(tree->left);

	if (tree->right == NULL)
		rheight = 0;
	else
		rheight = binary_tree_height_3(tree->right);

	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}

/**
 * binary_tree_balance_2 - find balance of binary tree
 * @tree: root of tree
 * Return: balance of tree
 */
int binary_tree_balance_2(const binary_tree_t *tree)
{
	int lheight, rheight;

	if (tree == NULL)
		return (0);

	lheight = binary_tree_height_3(tree->left);
	rheight = binary_tree_height_3(tree->right);

	return (lheight - rheight);
}

/**
 * binary_tree_is_full_2 - check if a binary tree is full
 * @tree: root of tree
 * Return: 1 if full else 0
 */
int binary_tree_is_full_2(const binary_tree_t *tree)
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

/**
 * binary_tree_is_perfect - check if tree is full and balanced
 * @tree: root of tree
 * Return: 1 if perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int b, f;

	if (tree == NULL)
		return (0);

	b = binary_tree_balance_2(tree);
	f = binary_tree_is_full_2(tree);

	if (b == 0 && f == 1)
		return (1);
	else
		return (0);

}
