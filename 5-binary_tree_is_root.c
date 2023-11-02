#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_is_root - Determines if a node is a root.
 *
 * @node: A pointer to the node to be checked.
 *
 * Return: 1 if the node is a root, 0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL || node->parent != NULL)
        return 0;

    return 1;
}

=======
 * binary_tree_is_root - Checks if a given node is a root.
 *
 * @node: A pointer to the node to check.
 *
 * Return: 1 if node is a root, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
