#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *@node: pointer to the node to find sibling
 * Return: sibling node pointer
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);

}
/**
 * binary_tree_uncle - function that finds the uncle of the node
 *@node: pointer to the node to find the uncle
 * Return: the uncle node pointer
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
