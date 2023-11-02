#include "binary_trees.h"

/**
<<<<<<< HEAD
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
=======
 * binary_tree_size - Measures the size of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the size.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}

	return (size);
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
}
