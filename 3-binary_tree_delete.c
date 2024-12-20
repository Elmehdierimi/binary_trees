#include "binary_trees.h"

/**
 * binary_tree_delete - function that delete all of a binary tree
 *@tree: pointer to the root node to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}

