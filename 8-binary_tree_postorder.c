#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a binary tree using in-order function
 * @tree: pointer to root of node of the tree to traverse
 * @func: pointer to func call
 *
 * Return: void ,  do nothing if tree or func is null
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* traverse the tree in this oreder -- left, right, root*/
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}