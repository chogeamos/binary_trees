#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_rotate_right - Performs a right rotation on a binary tree.
 *
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node of the tree after the rotation.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
    if (tree == NULL || tree->left == NULL)
        return (NULL);

    binary_tree_t *pivot = tree->left;
    binary_tree_t *tmp = pivot->right;

    pivot->right = tree;
    tree->left = tmp;

    if (tmp != NULL)
        tmp->parent = tree;

    tmp = tree->parent;
    tree->parent = pivot;
    pivot->parent = tmp;

    if (tmp != NULL)
    {
        if (tmp->left == tree)
            tmp->left = pivot;
        else
            tmp->right = pivot;
    }

    return pivot;
=======
 * binary_tree_rotate_right - Performs a right-rotation on a binary tree.
 *
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *pivot, *tmp;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	pivot = tree->left;
	tmp = pivot->right;
	pivot->right = tree;
	tree->left = tmp;
	if (tmp != NULL)
		tmp->parent = tree;
	tmp = tree->parent;
	tree->parent = pivot;
	pivot->parent = tmp;
	if (tmp != NULL)
	{
		if (tmp->left == tree)
			tmp->left = pivot;
		else
			tmp->right = pivot;
	}

	return (pivot);
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
}
