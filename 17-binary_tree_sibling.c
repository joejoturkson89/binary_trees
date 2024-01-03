#include "binary_trees.h"
/**
 * binary_tree_sibling - this  finds the sibling of a node.
 * @node: pointer to the node to find the sibling.
 * Return: return NULL if node is NULL or not a sibling,
 * otherwise return a pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
