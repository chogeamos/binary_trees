#include "binary_trees.h"

int heap_extract(heap_t **root);
void recursively_extract_max(heap_t *tree);
heap_t *find_max(heap_t *tree);

/**
 * heap_extract - Extracts the root node of a Max Binary Heap.
 *
 * @root: A double pointer to the root node of the heap.
 *
 * Return: The value stored in the root node.
 */
int heap_extract(heap_t **root)
{
	int value;

	if (!*root)
		return (0);
	value = (*root)->n;
	if (!(*root)->left)
	{
		free(*root);
		*root = NULL;
		return (value);
	}
	recursively_extract_max(*root);
	return (value);
}

/**
 * recursively_extract_max - Recursively extracts the maximum value from the tree.
 *
 * @tree: A pointer to the root of the tree.
 */
void recursively_extract_max(heap_t *tree)
{
	heap_t *sub_max, *right_max = NULL;

	if (!tree->left)
		return;
	sub_max = find_max(tree->left);
	if (tree->right)
		right_max = find_max(tree->right);
	if (right_max && right_max->n > sub_max->n)
		sub_max = right_max;
	tree->n = sub_max->n;
	if (!sub_max->left)
	{
		if (sub_max->parent && sub_max->parent->left == sub_max)
			sub_max->parent->left = NULL;
		if (sub_max->parent && sub_max->parent->right == sub_max)
			sub_max->parent->right = NULL;
		free(sub_max);
	}
	else
		recursively_extract_max(sub_max);
}

/**
 * find_max - Finds the node with the maximum value in a tree.
 *
 * @tree: A pointer to the root of the tree.
 *
 * Return: A pointer to the node with the maximum value.
 */
heap_t *find_max(heap_t *tree)
{
	heap_t *current_max, *left_max, *right_max;

	if (!tree->left)
		return (tree);
	left_max = find_max(tree->left);
	if (left_max->n > tree->n)
		current_max = left_max;
	else
		current_max = tree;
	if (tree->right)
	{
		right_max = find_max(tree->right);
		if (right_max->n > current_max->n)
			current_max = right_max;
	}
	return (current_max);
}

