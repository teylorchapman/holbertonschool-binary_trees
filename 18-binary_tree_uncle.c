#include "binary_trees.h"

/**
* binary_tree_uncle - finds the uncle of a node
* @node: a pointer to the node to find the uncle
* Return: a pointer to the uncle node, otherwise NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *gf;

if (!node)
return (NULL);
if (!node->parent || !node->parent->parent)
return (NULL);
gf = node->parent->parent;
if (node->parent == gf->left)
return (gf->right);
return (gf->left);
}
