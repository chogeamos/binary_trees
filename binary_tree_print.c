#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

<<<<<<< HEAD
/**
 * print_t - Recursively stores each level in an array of strings
=======
/* Original code from http://stackoverflow.com/a/13755911/5184480 */

/**
 * print_t - Stores recursively each level in an array of strings
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
 *
 * @tree: Pointer to the node to print
 * @offset: Offset to print
 * @depth: Depth of the node
 * @s: Buffer
 *
<<<<<<< HEAD
 * Return: Length of the printed tree after processing
 */
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s)
{
    char b[6];
    int width, left, right, is_left, i;

    if (!tree)
        return (0);
    is_left = (tree->parent && tree->parent->left == tree);
    width = sprintf(b, "(%03d)", tree->n);
    left = print_t(tree->left, offset, depth + 1, s);
    right = print_t(tree->right, offset + left + width, depth + 1, s);
    for (i = 0; i < width; i++)
        s[depth][offset + left + i] = b[i;
    if (depth && is_left)
    {
        for (i = 0; i < width + right; i++)
            s[depth - 1][offset + left + width / 2 + i] = '-';
        s[depth - 1][offset + left + width / 2] = '.';
    }
    else if (depth && !is_left)
    {
        for (i = 0; i < left + width; i++)
            s[depth - 1][offset - width / 2 + i] = '-';
        s[depth - 1][offset + left + width / 2] = '.';
    }
    return (left + width + right);
=======
 * Return: length of printed tree after process
 */
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s)
{
	char b[6];
	int width, left, right, is_left, i;

	if (!tree)
		return (0);
	is_left = (tree->parent && tree->parent->left == tree);
	width = sprintf(b, "(%03d)", tree->n);
	left = print_t(tree->left, offset, depth + 1, s);
	right = print_t(tree->right, offset + left + width, depth + 1, s);
	for (i = 0; i < width; i++)
		s[depth][offset + left + i] = b[i];
	if (depth && is_left)
	{
		for (i = 0; i < width + right; i++)
			s[depth - 1][offset + left + width / 2 + i] = '-';
		s[depth - 1][offset + left + width / 2] = '.';
	}
	else if (depth && !is_left)
	{
		for (i = 0; i < left + width; i++)
			s[depth - 1][offset - width / 2 + i] = '-';
		s[depth - 1][offset + left + width / 2] = '.';
	}
	return (left + width + right);
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
}

/**
 * _height - Measures the height of a binary tree
 *
<<<<<<< HEAD
 * @tree: Pointer to the node to measure the height
=======
 * @tree: Pointer to the node to measures the height
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
 *
 * Return: The height of the tree starting at @node
 */
static size_t _height(const binary_tree_t *tree)
{
<<<<<<< HEAD
    size_t height_l;
    size_t height_r;

    height_l = tree->left ? 1 + _height(tree->left) : 0;
    height_r = tree->right ? 1 + _height(tree->right) : 0;
    return (height_l > height_r ? height_l : height_r);
=======
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + _height(tree->left) : 0;
	height_r = tree->right ? 1 + _height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
}

/**
 * binary_tree_print - Prints a binary tree
 *
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
<<<<<<< HEAD
    char **s;
    size_t height, i, j;

    if (!tree)
        return;
    height = _height(tree);
    s = malloc(sizeof(*s) * (height + 1));
    if (!s)
        return;
    for (i = 0; i < height + 1; i++)
    {
        s[i] = malloc(sizeof(**s) * 255);
        if (!s[i])
            return;
        memset(s[i], 32, 255);
    }
    print_t(tree, 0, 0, s);
    for (i = 0; i < height + 1; i++)
    {
        for (j = 254; j > 1; --j)
        {
            if (s[i][j] != ' ')
                break;
            s[i][j] = '\0';
        }
        printf("%s\n", s[i]);
        free(s[i]);
    }
    free(s);
=======
	char **s;
	size_t height, i, j;

	if (!tree)
		return;
	height = _height(tree);
	s = malloc(sizeof(*s) * (height + 1));
	if (!s)
		return;
	for (i = 0; i < height + 1; i++)
	{
		s[i] = malloc(sizeof(**s) * 255);
		if (!s[i])
			return;
		memset(s[i], 32, 255);
	}
	print_t(tree, 0, 0, s);
	for (i = 0; i < height + 1; i++)
	{
		for (j = 254; j > 1; --j)
		{
			if (s[i][j] != ' ')
				break;
			s[i][j] = '\0';
		}
		printf("%s\n", s[i]);
		free(s[i]);
	}
	free(s);
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
}
