#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *@tree: the root of node
 *Return: 0 if Null
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t x, y;
	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		return (2);
		x = binary_tree_depth(tree->left);
		y = binary_tree_depth(tree->right);

		if (x < y)
		{
			return (x);
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
