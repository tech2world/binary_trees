#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a given node is a root
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a root otherwise 0
*/

int binary_tree_is_root(const binary_tree_t *node)
{
    /* if null, root does not exists*/
    if (node == NULL)
    {
        return (0);
    }

    /* check for parent, if none then it is a root*/
    if (node->parent == NULL)
    {
        return (1);
    }
    /* parent exists - not root*/
    return (0);
}
