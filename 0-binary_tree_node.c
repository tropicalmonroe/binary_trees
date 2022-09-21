#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer parent to next node creation
 * @value: pointer value of new node
 * Return: NULL if fails and new node if success
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
