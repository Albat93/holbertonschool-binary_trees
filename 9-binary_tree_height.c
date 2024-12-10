#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t x, y;
	if (tree != NULL)
	x = binary_tree_height(tree->left);
	y = binary_tree_height(tree->right);

	if (x <= y)
	{
		return (1 + x);
	}
	else
	{
		return (1 + y);
	}
}
