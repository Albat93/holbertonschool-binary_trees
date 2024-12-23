#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *@tree: the root of node
 *Return: 0 if Null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree ==  NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left >= right)
	{
		return (1 + left);
	}

	return (1 + right);

}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: the size of binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
