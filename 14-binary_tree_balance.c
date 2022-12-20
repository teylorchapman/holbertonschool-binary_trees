#include "binary_trees.h"

/**
* binary_tree_beight - measures the height of a binary tree
* @tree: a pointer to the root node of the tree to measure the height
* Return: 0 if the tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height = 0;
size_t right_height = 0;

if (tree == NULL)
{
return (0);
}
left_height = binary_tree_height(tree->left) + 1;
right_height = binary_tree_height(tree->right) + 1;
return ((left_height > right_height) ? left_height : right_height);
}

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: a pointer to the root node of the tree
* Return: 0 if the tree is NULL
*/

int binary_tree_balance(const binary_tree_t *tree)
{
if (tree)
return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
return (0);
}
