#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds the uncle of a node.
 * @node: is a pointer to the node to find the uncle.
 * Return: a pointer to the uncle node, if node is NULL, return NULL.
 * If node has no uncle, return NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	if (node->parent == node->parent->parent->right)
		return (node->parent->parent->left);
	return (NULL);
}
