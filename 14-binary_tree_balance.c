#include "binary_trees.h"
/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_balance(tree->left)) + 1;
		right = ((int)binary_tree_balance(tree->right)) + 1;
		total = left - right;
	}
	return (total);
}
