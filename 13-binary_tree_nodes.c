#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes in a binary tree
 * @tree: pointer to the root node of the tree to be counted
 *
 * Return: 0 if tree is NULL
 *
 * Description: A NULL pointer is not a node.
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_node;
	size_t right_node;

	if (tree == NULL)
	{
		return (0);
	}

	/* check if the current node has at least one child,
	if it does count it has as a node and recursively count the nodes in
	the left and right sub-trees*/

	if (tree->left != NULL || tree->right != NULL)
	{
		left_node = binary_tree_nodes(tree->left);
		right_node = binary_tree_nodes(tree->right);

		/* return number of nodes*/

		return (1 + left_node + right_node);
	}

	return (0);
}
