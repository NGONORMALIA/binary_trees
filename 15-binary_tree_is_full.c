#include "binary_trees.h"
int full_check(const binary_tree_t *tree);
/**
 * binary_tree_is_full - Check if binary tree is full
 * @tree: the pointer to the node
 * Return: 1 if full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (full_check(tree));
}
/**
 * full_check - check if full recurisively
 * @tree: the pointer to the node
 * Return: 1 if full 0 otherwise
 */
int full_check(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    full_check(tree->left) == 0 ||
		    full_check(tree->right) == 0)
			return (0);
	}
	return (1);
}
