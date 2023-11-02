#include "binary_trees.h"

heap_t *heap_insert(heap_t **root, int value);
size_t binary_tree_size(const binary_tree_t *tree);

/**
<<<<<<< HEAD
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
=======
 * heap_insert- Inserts a value in Max Binary Heap.
 *
 * @root: A double pointer to the root node of the Heap to insert the value.
 * @value: The value to store in the node to be inserted.
 *
 * Return: A pointer to the created node, or NULL on failure.
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *tree, *new, *flip;
	int size, leaves, sub, bit, level, tmp;
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16

	if (!root)
		return (NULL);
	if (!(*root))
		return (*root = binary_tree_node(NULL, value));

	tree = *root;
	size = binary_tree_size(tree);
<<<<<<< HEAD
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
=======
	leaves = size;

	for (level = 0, sub = 1; leaves >= sub; sub *= 2, level++)
		leaves -= sub;
	for (bit = 1 << (level - 1); bit != 1; bit >>= 1)
		tree = leaves & bit ? tree->right : tree->left;

	new = binary_tree_node(tree, value);
	leaves & 1 ? (tree->right = new) : (tree->left = new);

	flip = new;
	for (; flip->parent && (flip->n > flip->parent->n); flip = flip->parent)
	{
		tmp = flip->n;
		flip->n = flip->parent->n;
		flip->parent->n = tmp;
		new = new->parent;
	}

	return (new);
}

/**
 * binary_tree_size - Measures the size of a binary tree.
 *
 * @tree: A pointer to the tree to be measured.
 *
 * Return: Size of the tree, 0 if tree is NULL
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
