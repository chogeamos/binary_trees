#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 *
 * @node: A pointer to the node to find the uncle.
 *
<<<<<<< HEAD
 * Return: NULL if the node is NULL, has no parent, or has no grandparent (no uncle).
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return NULL;

    if (node->parent->parent->left == node->parent)
        return node->parent->parent->right;
    else
        return node->parent->parent->left;
}

=======
 * Return: NULL if node is NULL or node has no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	return (node->parent->parent->left);
}
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
