#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_delete - Recursively deletes an entire binary tree.
=======
 * binary_tree_delete - Deletes an entire binary tree.
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
 *
 * @tree: A pointer to the root node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
