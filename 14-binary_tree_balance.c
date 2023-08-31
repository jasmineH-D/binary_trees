#include <stdlib.h>
#include "binary_trees.h"
/**
  * binary_tree_balance - measures the height of a binary tree
  * factor of a binary tree
  * @tree: pointer to the root node of
  * the tree to measure the balance factor
  * Return: if tree is NULL, return 0
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	return (l - r);
}
/**
  * binary_tree_height - measures the height of a binary tree
  * @tree: pointer to the root node of the tree to traverse
  * Return: if tree is NULL return 0
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if (left_h >= right_h)
		return (left_h + 1);
	return (right_h + 1);
}
/**
  * binary_tree_is_leaf - checks if a node is a leaf
  * @node: pointer to node to the check
  * Return: 1 if node is a leaf, 0 otherwise
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}