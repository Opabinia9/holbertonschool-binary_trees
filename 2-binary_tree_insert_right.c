#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a right node
 * @parent: parent node
 * @value: value for node
 * Return: pointer to node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->right = parent->right;
	parent->right = node;
	if (node->right)
		node->right->parent = node;
	return (node);
}
