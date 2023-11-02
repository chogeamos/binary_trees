#include "binary_trees.h"

/**
 * binary_tree_insert_left - Add a node as the left-child of another node.
 *
 * @parent: A pointer to the node where the left child should be added.
 * @value: The value to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL if the operation fails.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
