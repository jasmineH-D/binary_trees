#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: pointer to the node to insert te left-child in
 * @value: the value to store in the new node
 * Return: a pointer to created node, or 0 on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newsnode;

	if (parent == NULL)
		return (NULL);
	newsnode = malloc(sizeof(binary_tree_t));
	if (newsnode == NULL)
		return (NULL);
	newsnode->n = value;
	newsnode->parent = parent;
	newsnode->left = NULL;
	newsnode->right = NULL;

	if (parent->left != NULL)
	{
		newsnode->left = parent->left;
		parent->left->parent = newsnode;
	}
	parent->left = newsnode;
	return (newsnode);
}