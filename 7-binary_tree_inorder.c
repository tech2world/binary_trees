#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse a binary tree using in-order function
 * @tree: pointer to root of node of the tree to traverse
 * @func: pointer to func call
 * 
 * Return: void ,  do nothing if tree or func is null
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	/* traverse the tree in this oreder -- left, root, right*/
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}