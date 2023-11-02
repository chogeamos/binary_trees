#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree);
int is_full_recursive(const binary_tree_t *tree);

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
<<<<<<< HEAD
 * Return: 0 if the tree is NULL.
=======
 * Return: 0 if tree is NULL.
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
<<<<<<< HEAD
		return 0;
	return is_full_recursive(tree);
}

/**
 * is_full_recursive - Recursively checks if a binary tree is full.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 if the tree is not NULL, otherwise 1.
=======
		return (0);
	return (is_full_recursive(tree));
}

/**
 * is_full_recursive - Checks if a binary tree is full recursively.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is not NULL, otherwise 1.
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
<<<<<<< HEAD
			return 0;
	}

	return 1;
=======

			return (0);
	}

	return (1);
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
}
