#include "binary_trees.h"
/**
 * binary_tree_depth -  function that measures the depth of a node
 * in a binary tree.
 * @tree: is a pointer to the node to measure the depth.
 * Return: depth of a node in a binary tree or 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t con = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
	{
		con = binary_tree_depth(tree->parent);
		con++;
	}
	return (con);
}
