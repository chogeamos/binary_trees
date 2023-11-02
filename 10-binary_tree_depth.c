#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_depth - Computes the depth of a node in a binary tree.
 *
 * @tree: A pointer to the node for which to compute the depth.
 *
 * Return: 0 if the tree is NULL or if the node has no parent.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    return ((tree != NULL && tree->parent != NULL) ? 1 + binary_tree_depth(tree->parent) : 0);
=======
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
}
