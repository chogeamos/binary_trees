#include "binary_trees.h"

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree.
 *
 * @tree: A pointer to the root node of the tree for balance factor calculation.
 *
 * Return: 0 if the tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree != NULL)
        return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

    return 0;
}

/**
 * binary_tree_height - Computes the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree for height calculation.
 *
 * Return: 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree != NULL)
    {
        size_t left_height = 0, right_height = 0;

        left_height = (tree->left != NULL) ? 1 + binary_tree_height(tree->left) : 0;
        right_height = (tree->right != NULL) ? 1 + binary_tree_height(tree->right) : 0;

        return ((left_height > right_height) ? left_height : right_height);
    }

    return 0;
}
