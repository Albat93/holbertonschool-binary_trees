#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: the parent node
 * @value: value given to the new node
 * Return: newnode
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->n = value;
	node->left = NULL;
	node->right = NULL;

	if (parent->left != NULL)
	{
		newnode->left = parent->left; /*attribut la valeur*/
		newnode->left->parent = newnode; /**/
		parent->left = newnode;
	}
	else
		parent->left = newnode;

	return (newnode);
}
