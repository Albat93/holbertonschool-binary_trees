#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: the size of binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (binary_tree_height(tree))
		return (1);

	left = binary_tree_balance(tree->left);
	right = binary_tree_balance(tree->right);

	return (right - left);
}
