#include "binary_trees.h"

/**
 * binary_tree_postorder - using post-order now through that binary tree
 *@tree:pointer to the root node as usual
 *@func:pointer to a fnctn to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
