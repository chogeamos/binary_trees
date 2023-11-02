#include "binary_trees.h"

/**
<<<<<<< HEAD
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
=======
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lef = 0, rig = 0;

		lef = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		rig = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		return ((lef > rig) ? lef : rig);
	}

	return (0);
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
}
