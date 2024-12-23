#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *@tree: the root of node
 *Return: 0 if Null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t x, y;

	if (tree ==  NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	x = binary_tree_height(tree->left);
	y = binary_tree_height(tree->right);

	if (x >= y)
	{
		return (x + 1);
	}
	else
	{
		return (y + 1);
	}

}
