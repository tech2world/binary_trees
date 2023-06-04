#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to mesure the height
 *
 * Return: 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	/* calculates height of left and right sub-trees recursively*/
	if (tree->left != NULL)
	{
		left_height = 1 + binary_tree_height(tree->left);
	}
	else
	{
		left_height = 0;
	}

	if (tree->right != NULL)
	{
		right_height = 1 + binary_tree_height(tree->right);
	}
	else
	{
		right_height = 0;
	}
	/* return the highest height*/
	if (left_height > right_height)
	{
		return (left_height);
	}
	else
	{
		return (right_height);
	}
}
