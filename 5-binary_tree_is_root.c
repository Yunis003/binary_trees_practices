#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: is a pointer to the node to check
 * Return: root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == node && node->right == node)
		return (1);

	return (0);
}
