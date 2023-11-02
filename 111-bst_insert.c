#include "binary_trees.h"

/**
 * bst_insert - Inserts a value into a Binary Search Tree (BST).
 *
 * @tree: A double pointer to the root node of the BST.
 * @value: The value to store in the new node to be inserted.
 *
 * Return: A pointer to the created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
    bst_t *current, *new;

    if (tree != NULL)
    {
        current = *tree;

        // If the current node is NULL, create a new node with the given value.
        if (current == NULL)
        {
            new = binary_tree_node(current, value);
            if (new == NULL)
                return (NULL);

            // Update the root node (tree) to point to the new node.
            *tree = new;
            return new;
        }

        // If the value is less than the current node's value, insert it in the left subtree.
        if (value < current->n)
        {
            if (current->left != NULL)
                return bst_insert(&current->left, value);

            // Create a new node and update the current node's left child.
            new = binary_tree_node(current, value);
            if (new == NULL)
                return (NULL);

            current->left = new;
            return new;
        }

        // If the value is greater than the current node's value, insert it in the right subtree.
        if (value > current->n)
        {
            if (current->right != NULL)
                return bst_insert(&current->right, value);

            // Create a new node and update the current node's right child.
            new = binary_tree_node(current, value);
            if (new == NULL)
                return (NULL);

            current->right = new;
            return new;
        }
    }

    // Return NULL in case of invalid input or failure.
    return (NULL);
}
