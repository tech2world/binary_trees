#include "binary_trees.h"

/**
 * binary_tree_node - create a new binary tree node.
 * @parent: pointer to the parent node of the node to create
 * @value: vale to put in the new node
 *
 * Return: a pointer to the new node or NULL on failure .
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* create a new node of data type binary_tree_t*/
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
