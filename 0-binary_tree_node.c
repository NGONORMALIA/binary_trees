#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - create new binary node
 * @parent: the pointer to parent node to create
 * @value : the value to assign
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree = malloc(sizeof(binary_tree_t));

	if (tree == NULL)
	{
		return (NULL);
	}
	tree->n = value;
	tree->parent = parent;
	tree->left = NULL;
	tree->right = NULL;
	return (tree);
}
