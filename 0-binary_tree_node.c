#include "binary_trees.h"

/**
 * binary_tree_node - create a node in for a binary tree
 * @parent: parent of new node
 * @value: value for new node
 * Return: pointer to new node on success
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(*node));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
