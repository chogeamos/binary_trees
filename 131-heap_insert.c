#include "binary_trees.h"

heap_t *heap_insert(heap_t **root, int value);
size_t binary_tree_size(const binary_tree_t *tree);

/**
 * heap_insert - Inserts a value into a Max Binary Heap.
 *
 * @root: A double pointer to the root node of the Heap where the value is to be inserted.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *tree, *new_node, *parent;
	int size, remaining_leaves, subtree, bit, level, tmp;

	if (!root)
		return (NULL);
	if (!(*root))
		return (*root = binary_tree_node(NULL, value));

	tree = *root;
	size = binary_tree_size(tree);
	remaining_leaves = size;

	for (level = 0, subtree = 1; remaining_leaves >= subtree; subtree *= 2, level++)
		remaining_leaves -= subtree;
	for (bit = 1 << (level - 1); bit != 1; bit >>= 1)
		tree = remaining_leaves & bit ? tree->right : tree->left;

	new_node = binary_tree_node(tree, value);
	remaining_leaves & 1 ? (tree->right = new_node) : (tree->left = new_node);

	parent = new_node;
	for (; parent->parent && (parent->n > parent->parent->n); parent = parent->parent)
	{
		tmp = parent->n;
		parent->n = parent->parent->n;
		parent->parent->n = tmp;
		new_node = new_node->parent;
	}

	return new_node;
}

/**
 * binary_tree_size - Computes the size of a binary tree.
 *
 * @tree: A pointer to the tree to be measured.
 *
 * Return: The size of the tree, or 0 if the tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
