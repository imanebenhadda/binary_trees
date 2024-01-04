#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * in a binary tree
 * @tree: is a pointer to the root node of the tree to measure the
 * depth
 * Return: the depth of a node in a binary tree
 *		if tree is NULL, return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (!tree->parent)
	{
		return (0);
	}
	return (1 + binary_tree_depth(tree->parent));

}
