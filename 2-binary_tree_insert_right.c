#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts new node at right child of a node
 * @parent: pointer to the node to insert te left-child in
 * @value: the value to store in the new node
 * Return: a pointer to created node, or 0 on failure or if is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newsnode;

	if (!parent)
		return (NULL);
	newsnode = malloc(sizeof(binary_tree_t));
	if (newsnode == NULL)
		return (NULL);
	newsnode->n = value;
	newsnode->parent = parent;
	newsnode->left = NULL;
	newsnode->right = NULL;

	if (parent->right != NULL)
	{
		newsnode->right = parent->right;
		parent->right->parent = newsnode;
	}
	parent->right = newsnode;
	return (newsnode);
}