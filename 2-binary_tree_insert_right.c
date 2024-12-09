#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: the parent node
 * @value: value given to the new node
 * Return: newnode
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->n = value;
	newnode->right = NULL;
	newnode->right = NULL;

	if (parent->right != NULL)
	{
		newnode->right = parent->right; /*attribut la valeur*/
		newnode->right->parent = newnode; /**/
		parent->right = newnode;
	}
	else
		parent->right = newnode;

	return (newnode);
}
