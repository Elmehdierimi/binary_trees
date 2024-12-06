#include "binary_trees.h"

/**
 * binary_tree_inorder - fnctn using in-order goes through that binary tree
 *@tree: pointer to the root node as we said earlier
 *@func: point to a fnctn to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
