#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node with no children
 * @parent: the parent node
 * @value: value given to the new node
 * Return: newnode
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;


	return (node);
}
