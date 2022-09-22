#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in binary tree
 * @tree: a pointer to the root node of tree counting no of leaves
 * Return: If tree is NULL, the function must return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->right)
		+ binary_tree_leaves(tree->left));
}
