#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the size of a binary tree.
 *
 * @tree: A pointer to the root node of the tree for which to determine the size.
 *
 * Return: 0 if the tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t size = 0;

    if (tree != NULL)
    {
        size += 1;
        size += binary_tree_size(tree->left);
        size += binary_tree_size(tree->right);
    }

    return size;
}