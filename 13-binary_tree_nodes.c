#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count = 0;
	if (tree == NULL)
	{
		return (0);
	}
	count = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	if (binary_tree_nodes(tree->left) != 0 || binary_tree_nodes(tree->right) != 0)
	{
		return (count + 1);
	}
	else
		return (count);
}
