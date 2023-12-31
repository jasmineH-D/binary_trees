#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: if tree is NULL 0, otherwise number of nodes
**/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree || (tree->left == NULL && tree->right == NULL))
		return (0);
	l = binary_tree_nodes(tree->left);
	r = binary_tree_nodes(tree->right);
	return (1 + left + right);
}
