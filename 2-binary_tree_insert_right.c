#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a node as the right-child of another node
* @parent: pointer to the parent of the node to create
* @value: the value to put in the new node
* Return: pointer to the created node, NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new;

if (!parent)
return (NULL);

new = malloc(sizeof(binary_tree_t));

if (!new)
return (NULL);

new->n = value;
new->left = NULL;
new->parent = parent;
new->right = parent->right;
parent->right = new;

return (new);
}
