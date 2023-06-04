#include "binary_trees.h"

/**
 * binary_tree_leaves - count the numbe rof leaf nodes
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaf;
	size_t right_leaf;

	if (tree == NULL)
	{
		return (0);
	}

	/* leaf node both left and right child is NULL*/
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	/* count left and right leaf nodes, then return sum*/
	left_leaf = binary_tree_leaves(tree->left);
	right_leaf = binary_tree_leaves(tree->right);

	return (left_leaf + right_leaf);
}
