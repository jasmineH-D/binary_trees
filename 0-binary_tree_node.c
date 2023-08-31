#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newsnode;

	newsnode = malloc(sizeof(binary_tree_t));

	if (newsnode == NULL)
		return (NULL);
	
	newsnode->n = value;
	newsnode->parent = parent;
	newsnode->left = NULL;
	newsnode->right = NULL;
	return (newsnode);
}