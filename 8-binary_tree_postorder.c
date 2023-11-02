#include "binary_trees.h"

/**
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
}
