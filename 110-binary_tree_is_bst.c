#include "binary_trees.h"

int binary_tree_is_bst(const binary_tree_t *tree);
int is_bst_helper(const binary_tree_t *tree, int min_value, int max_value);

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is a valid BST, and 0 otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return is_bst_helper(tree, INT_MIN, INT_MAX);
}

/**
 * is_bst_helper - Checks if a binary tree is a valid binary search tree.
 *
 * @tree: A pointer to the root node of the tree to check.
 * @min_value: The value of the smallest node visited thus far.
 * @max_value: The value of the largest node visited thus far.
 *
 * Return: If the tree is a valid BST, 1, otherwise, 0.
 */
int is_bst_helper(const binary_tree_t *tree, int min_value, int max_value)
{
    if (tree != NULL)
    {
        if (tree->n < min_value || tree->n > max_value)
            return (0);
        return (is_bst_helper(tree->left, min_value, tree->n - 1) &&
                is_bst_helper(tree->right, tree->n + 1, max_value));
    }

    return (1);
}
