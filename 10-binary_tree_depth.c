#include "binary_trees.h"

/**
 * binary_tree_depth - Computes the depth of a node in a binary tree.
 *
 * @tree: A pointer to the node for which to compute the depth.
 *
 * Return: 0 if the tree is NULL or if the node has no parent.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    return ((tree != NULL && tree->parent != NULL) ? 1 + binary_tree_depth(tree->parent) : 0);
}
