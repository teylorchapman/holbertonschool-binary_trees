#include "binary_trees.h"

/**
* binary_tree_is_leaf - checks if node is a leaf
* @node: pointer to node to check
* Return: 1 if node is a leaf, 0 otherwise
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node != NULL && node->left == NULL && node->right == NULL)
return (1);
else
return (0);
}


/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of the tree to measure the height of
* Return: 0 if tree is NULL
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;
if (tree == NULL || binary_tree_is_leaf(tree))
return (0);
left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
if (left >= right)
return (1 + left);
else
return (1 + right);
}


/**
* binary_tree_is_perfect - checks if binary tree is perfect
* @tree: a pointer to the root node of the tree to check
* Return: 0 if tree is NULL
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
binary_tree_t *lf, *rg;

if (tree == NULL)
return (0);
lf = tree->left;
rg = tree->right;
if (binary_tree_is_leaf(tree))
return (1);
if (lf == NULL || rg == NULL)
return (0);
if (binary_tree_height(lf) == binary_tree_height(rg))
{
if (binary_tree_is_perfect(lf) && binary_tree_is_perfect(rg))
return (1);
}
return (0);
}
