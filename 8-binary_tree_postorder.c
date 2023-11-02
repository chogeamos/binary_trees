#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_postorder - Performs a post-order traversal on a binary tree.
 *
 * @tree: A pointer to the root node of the tree to be traversed.
 * @func: A pointer to a function to be executed for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree != NULL && func != NULL)
    {
        binary_tree_postorder(tree->left, func);
        binary_tree_postorder(tree->right, func);
        func(tree->n);
    }
=======
 * binary_tree_postorder - Goes through a binary by tree post-order traversal.
 *
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
}
