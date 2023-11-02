#include "binary_trees.h"

/**
 * binary_tree_nodes - Computes the count of nodes with at least one child in a binary tree.
 *
 * @tree: A pointer to the root node of the tree for node counting.
 *
 * Return: 0 if the tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t nodes = 0;

    if (tree != NULL)
    {
        nodes += (tree->left || tree->right) ? 1 : 0;
        nodes += binary_tree_nodes(tree->left);
        nodes += binary_tree_nodes(tree->right);
    }

    return nodes;
}
