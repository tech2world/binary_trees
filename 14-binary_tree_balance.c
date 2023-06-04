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

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_heigth;

	if (tree == NULL)
	{
		return (0);
	}
	/*Balance factor = height of left sub-tree - height of right sub-tree,
	using our previously created height function 'binary_tree_height'*/

	left_height = binary_tree_height(tree->left);
	right_heigth = binary_tree_height(tree->right);

	return (left_height - right_heigth);
}
