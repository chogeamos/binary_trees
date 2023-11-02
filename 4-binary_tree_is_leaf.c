#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_is_leaf - Determines if a node is a leaf.
 *
 * @node: A pointer to the node to be checked.
 *
 * Return: 1 if the node is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL || node->left != NULL || node->right != NULL)
        return 0;

    return 1;
=======
 * binary_tree_is_leaf - Checks if a node is a leaf.
 *
 * @node: A pointer to the node to check.
 *
 * Return: 1 if node is a leaf, otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
}
