#include "binary_trees.h"

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
