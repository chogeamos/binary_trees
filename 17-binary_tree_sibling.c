#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 *
 * @node: A pointer to the node to find the sibling.
 *
<<<<<<< HEAD
 * Return: NULL if the node is NULL, the parent is NULL, or the node has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
        return NULL;

    if (node->parent->left == node)
        return node->parent->right;
    else
        return node->parent->left;
=======
 * Return: NULL if node is NULL or parent is NULL or node has no sibiling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);

	return (node->parent->left);
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
}
