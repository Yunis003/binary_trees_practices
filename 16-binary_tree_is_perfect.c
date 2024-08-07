#include "binary_trees.h"
/**
 * tree_prf - Function that says if a tree is perfect or not.
 * @tree: Tree to be checked
 * Return: 1 if tree is perfect,
 *	0 if not.
 */
int tree_prf(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;

	if (tree->left && tree->right)
	{
		l = 1 + tree_prf(tree->left);
		r = 1 + tree_prf(tree->right);
		if (l == r)
		{
			return (l);
		}
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - Checks binary tree if it is perfect
 * @tree: Binary tree to check
 *
 * Return: 1 if tree is perfect,
 *	0 if not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int n = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		n = tree_prf(tree);

		if (n != 0)
		{
			return (1);
		}
		return (0);
	}
}
