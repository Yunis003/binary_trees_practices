#include "binary_trees.h"
/**
 * binary_tree_leaves - function that returns the number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counters = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		counters += binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
		if ((!binary_tree_leaves(tree->left) && !binary_tree_leaves(tree->right)))
		{
			return (counters + 1);
		}
		else
		{
			return (counters);
		}
	}
}
