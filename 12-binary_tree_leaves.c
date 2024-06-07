#include "binary_trees.h"

/**
 * binary_tree_leaves - calculate the binary leaves
 * @tree: the pointer to the node
 * Return: no. of leaves and NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t rem = 0;

	if (tree)
	{
		rem += (!tree->left && !tree->right) ? 1 : 0;
		rem += binary_tree_leaves(tree->left);
		rem += binary_tree_leaves(tree->right);
	}
	return (rem);
}
