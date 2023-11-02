#include "binary_trees.h"

int binary_tree_is_heap(const binary_tree_t *tree);
int check_parent(const binary_tree_t *tree);
int binary_tree_is_complete(const binary_tree_t *tree);
int tree_is_complete(const binary_tree_t *tree, int index, int total_nodes);
size_t binary_tree_size(const binary_tree_t *tree);

/**
 * binary_tree_is_heap - Checks if a binary tree is a valid Max Binary Heap.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is a valid Max Binary Heap, and 0 otherwise.
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (!binary_tree_is_complete(tree))
		return (0);

	return (check_parent(tree->left) && check_parent(tree->right));
}

/**
 * check_parent - Checks if a parent node has a greater value than its children.
 *
 * @tree: A pointer to the node.
 *
 * Return: 1 if the parent has a greater value, 0 otherwise.
 */
int check_parent(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if (tree->n > tree->parent->n)
		return (0);

	return (check_parent(tree->left) && check_parent(tree->right));
}

/**
 * binary_tree_is_complete - Calls the tree_is_complete function.
 *
 * @tree: The tree's root.
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t total_nodes;

	if (tree == NULL)
		return (0);

	total_nodes = binary_tree_size(tree);

	return (tree_is_complete(tree, 0, total_nodes));
}

/**
 * tree_is_complete - Checks if the tree is complete.
 *
 * @tree: Pointer to the tree's root.
 * @index: Node index.
 * @total_nodes: Total number of nodes.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int tree_is_complete(const binary_tree_t *tree, int index, int total_nodes)
{
	if (tree == NULL)
		return (1);

	if (index >= total_nodes)
		return (0);

	return (tree_is_complete(tree->left, (2 * index) + 1, total_nodes) &&
		tree_is_complete(tree->right, (2 * index) + 2, total_nodes));
}

/**
 * binary_tree_size - Measures the size of a binary tree.
 *
 * @tree: The tree's root.
 * Return: The size of the tree or 0 if the tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
