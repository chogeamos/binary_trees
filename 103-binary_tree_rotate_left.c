#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_rotate_left - Performs a left rotation on a binary tree.
 *
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node of the tree after the rotation.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
    if (tree == NULL || tree->right == NULL)
        return (NULL);

    binary_tree_t *pivot = tree->right;
    binary_tree_t *tmp = pivot->left;

    pivot->left = tree;
    tree->right = tmp;

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
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree.
 *
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node of the tree once rotated.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{

	binary_tree_t *pivot, *tmp;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	pivot = tree->right;
	tmp = pivot->left;
	pivot->left = tree;
	tree->right = tmp;
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
