#include "binary_trees.h"
/**
 * binary_tree_nodes - this counts the nodeswith at least 1 child
 * in a binary tree.
 * @tree: pointer to the root node of the tree to count its nodes.
 * Return: return 0 if tree is NULL, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}