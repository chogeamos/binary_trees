#include "binary_trees.h"

<<<<<<< HEAD
=======
avl_t *avl_remove(avl_t *root, int value);
bst_t *bst_remove(bst_t *root, int value);
int remove_type(bst_t *root);
int successor(bst_t *node);
void bal(avl_t **tree);

>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
/**
 * avl_remove - Removes a node from an AVL tree.
 *
 * @root: A pointer to the root node of the tree for removing a node.
 * @value: The value to remove in the tree.
 *
 * Return: A pointer to the new root node of the tree after
 *         removing the desired value, and after rebalancing
 */
avl_t *avl_remove(avl_t *root, int value)
{
	avl_t *root_a = (avl_t *) bst_remove((bst_t *) root, value);

	if (root_a == NULL)
		return (NULL);
	bal(&root_a);

	return (root_a);
}

/**
 * bst_remove - Remove a node from a BST tree.
 *
 * @root: Root of the tree.
 * @value: Node with this value to remove.
 *
<<<<<<< HEAD
 * Return: The tree after removing the specified value.
=======
 * Return: The tree changed
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
 */
bst_t *bst_remove(bst_t *root, int value)
{
	int type = 0;

	if (root == NULL)
		return (NULL);
	if (value < root->n)
		bst_remove(root->left, value);
	else if (value > root->n)
		bst_remove(root->right, value);
	else if (value == root->n)
	{
		type = remove_type(root);
		if (type != 0)
			bst_remove(root->right, type);
	}
	else
		return (NULL);
	return (root);
}

/**
<<<<<<< HEAD
 * remove_type - Function that removes a node depending on its children.
 *
 * @root: Node to remove.
 *
 * Return: 0 if it has no children or another value if it has children.
=======
 * remove_type - Function that removes a node depending of its children.
 *
 * @root: Node to remove.
 *
 * Return: 0 if it has no children or other value if it has
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
 */
int remove_type(bst_t *root)
{
	int new_value = 0;

	if (!root->left && !root->right)
	{
		if (root->parent->right == root)
			root->parent->right = NULL;
		else
			root->parent->left = NULL;
		free(root);
		return (0);
	}
	else if ((!root->left && root->right) || (!root->right && root->left))
	{
		if (!root->left)
		{
			if (root->parent->right == root)
				root->parent->right = root->right;
			else
				root->parent->left = root->right;
			root->right->parent = root->parent;
		}
		if (!root->right)
		{
			if (root->parent->right == root)
				root->parent->right = root->left;
			else
				root->parent->left = root->left;
			root->left->parent = root->parent;
		}
		free(root);
		return (0);
	}
	else
	{
		new_value = successor(root->right);
		root->n = new_value;
		return (new_value);
	}
}

/**
<<<<<<< HEAD
 * successor - Get the next successor, meaning the minimum node in the right subtree.
 *
 * @node: Tree to check.
 *
 * Return: The minimum value of this tree.
=======
 * successor - Get the next successor i mean the min node in the right subtree.
 *
 * @node: Tree to check.
 *
 * Return: The min value of this tree.
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
 */
int successor(bst_t *node)
{
	int left = 0;

	if (node == NULL)
	{
		return (0);
	}
	else
	{
		left = successor(node->left);
		if (left == 0)
		{
			return (node->n);
		}
		return (left);
	}
}

/**
<<<<<<< HEAD
 * bal - Measures the balance factor of an AVL tree.
=======
 * bal - Measures balance factor of a AVL.
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
 *
 * @tree: Tree to go through.
 *
 * Return: Balanced factor.
 */
void bal(avl_t **tree)
{
	int bval;

	if (tree == NULL || *tree == NULL)
		return;
	if ((*tree)->left == NULL && (*tree)->right == NULL)
		return;
	bal(&(*tree)->left);
	bal(&(*tree)->right);
	bval = binary_tree_balance((const binary_tree_t *)*tree);
	if (bval > 1)
		*tree = binary_tree_rotate_right((binary_tree_t *)*tree);
	else if (bval < -1)
		*tree = binary_tree_rotate_left((binary_tree_t *)*tree);
}
