#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	/*Check if current node is a leaf node*/

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/*check if sub-trees are present and are full*/

	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) && \
		binary_tree_is_full(tree->right));
	}
	return (0);
}
