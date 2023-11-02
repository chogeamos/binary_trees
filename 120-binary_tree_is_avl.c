#include "binary_trees.h"

/**
 * binary_tree_is_avl - Checks if a binary tree is a valid AVL Tree.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is a valid AVL Tree, and 0 otherwise.
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
    // Check if the tree is empty
    if (tree == NULL) {
        return 0;
    }

    // Call the recursive helper function to perform the AVL tree validation
    return is_avl_helper(tree, INT_MIN, INT_MAX);
}

/**
 * is_avl_helper - Recursive helper function to validate if the tree is an AVL tree.
 * @tree: A pointer to the root node of the tree to check.
 * @lo: The minimum allowed value for nodes in the tree.
 * @hi: The maximum allowed value for nodes in the tree.
 *
 * Return: 1 if the tree is a valid AVL tree, and 0 otherwise.
 */
int is_avl_helper(const binary_tree_t *tree, int lo, int hi)
{
    // Check if the current node is not NULL
    if (tree != NULL) {
        // Check if the node's value is within the valid range
        if (tree->n < lo || tree->n > hi) {
            return 0;
        }

        // Calculate the heights of the left and right subtrees
        size_t left_height = height(tree->left);
        size_t right_height = height(tree->right);

        // Check if the height difference is greater than 1
        if (abs((int)left_height - (int)right_height) > 1) {
            return 0; // The tree is not balanced
        }

        // Recursively validate the left and right subtrees
        return is_avl_helper(tree->left, lo, tree->n - 1) &&
               is_avl_helper(tree->right, tree->n + 1, hi);
    }

    // If the node is NULL, it doesn't affect the AVL property
    return 1;
}

/**
 * height - Calculate the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree, or 0 if the tree is empty.
 */
size_t height(const binary_tree_t *tree)
{
    // Base case: an empty tree has a height of 0
    if (tree == NULL) {
        return 0;
    }

    // Calculate the heights of the left and right subtrees
    size_t left_height = height(tree->left);
    size_t right_height = height(tree->right);

    // Return the maximum height plus 1
    return (left_height > right_height) ? (left_height + 1) : (right_height + 1);
}
