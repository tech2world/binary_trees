#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to mesure the height
 *
 * Return: 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return 0;
	}

	/* calculates height of left and right sub-trees recursively*/
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* return the highest + 1 (root)*/
	if (left_height > right_height)
	{
		return (1 + left_height);
	}
	else
	{
		return (1 + right_height);
	}
}
