#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: pointer to the node to insert the left child in
* @value: value to store in the new node
* Return: pointer to the created node or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *newNode;
binary_tree_t *aux;

if (parent == NULL)
return (NULL);

newNode = malloc(sizeof(binary_tree_t));

if (newNode == NULL)
return (NULL);

newNode->right = NULL;
newNode->n = value;
aux = parent->left;
parent->left = newNode;
newNode->left = aux;
newNode->parent = parent;

if (aux != NULL)
aux->parent = newNode;
return (newNode);
}
