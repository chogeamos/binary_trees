#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree);
<<<<<<< HEAD
int is_perfect_recursive(const binary_tree_t *tree, size_t leaf_depth, size_t level);
const binary_tree_t *find_leaf(const binary_tree_t *tree);
size_t calculate_depth(const binary_tree_t *tree);
unsigned char is_leaf(const binary_tree_t *node);

/**
 * binary_tree_is_perfect - Checks if a binary tree is a perfect binary tree.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 if the tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;
    return is_perfect_recursive(tree, calculate_depth(find_leaf(tree)), 0);
}

/**
 * calculate_depth - Returns the depth of a given node in a binary tree.
 * @tree: A pointer to the node to calculate the depth for.
 *
 * Return: The depth of the node.
 */
size_t calculate_depth(const binary_tree_t *tree)
{
    return (tree->parent != NULL ? 1 + calculate_depth(tree->parent) : 0);
}

/**
 * find_leaf - Returns a leaf node from a binary tree.
 * @tree: A pointer to the root node of the tree to find a leaf in.
 *
 * Return: A pointer to the first encountered leaf node.
 */
const binary_tree_t *find_leaf(const binary_tree_t *tree)
{
    if (is_leaf(tree))
        return tree;
    return (tree->left ? find_leaf(tree->left) : find_leaf(tree->right));
=======
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
size_t depth(const binary_tree_t *tree);
unsigned char is_leaf(const binary_tree_t *node);

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}

/**
 * depth - Returns the depth of a given
 *         node in a binary tree.
 * @tree: A pointer to the node to measure the depth of.
 *
 * Return: The depth of node.
 */
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - Returns a leaf of a binary tree.
 * @tree: A pointer to the root node of the tree to find a leaf in.
 *
 * Return: A pointer to the first encountered leaf.
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
}

/**
 * is_perfect_recursive - Checks if a binary tree is perfect recursively.
 * @tree: A pointer to the root node of the tree to check.
 * @leaf_depth: The depth of one leaf in the binary tree.
<<<<<<< HEAD
 * @level: The level of the current node.
 *
 * Return: If the tree is perfect, 1; otherwise, 0.
 */
int is_perfect_recursive(const binary_tree_t *tree, size_t leaf_depth, size_t level)
{
    if (is_leaf(tree))
        return (level == leaf_depth ? 1 : 0);
    if (tree->left == NULL || tree->right == NULL)
        return 0;
    return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
            is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * is_leaf - Checks if a node is a leaf node in a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf, 1; otherwise, 0.
 */
unsigned char is_leaf(const binary_tree_t *node)
{
    return ((node->left == NULL && node->right == NULL) ? 1 : 0);
=======
 * @level: Level of current node.
 *
 * Return: If the tree is perfect, 1, otherwise 0.
 */
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
		is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * is_leaf - Checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf, 1, otherwise, 0.
 */
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
}
