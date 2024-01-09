#include "binary_trees.h"
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree: is a pointer to the root node of the tree to check.
 * Return: an integer indicating if a binary tree is perfect,
 * or 0 if tree us NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left == right)
		return (1);
	if (binary_tree_is_perfect(tree->left)
	&& binary_tree_is_perfect(tree->right))
	    return (0);
	return (!binary_tree_is_perfect(tree->left));
}
/**
 * binary_tree_height -  function that measures the height of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the height.
 * Return: the height of a binary tree or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;
	if (left > right)
		return (left);
	else
		return (right);
}