#include "binary_trees.h"

/**
 * binary_tree_node - fnctn that creates a node of a binary tree
 *@parent: point to parent node of the node to create
 *@value: value to put in the new node
 * Return: yes return a pointer to the new node ,no NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
