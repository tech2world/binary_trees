#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if a binary tre is perfect
 * @tree: pointer to the root node of the tree to be checked
 *
 * Return: 0 if tree is NULL
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return 0;
	}

	/*A perfect tree is a full and balanced tree, we will be using
	an helper function to implement this function
	check if tree is full and has balanced height*/

	if (binary_tree_is_full(tree) && binary_tree_balance(tree))
	{
		return 1;
	}

	return 0;
}
