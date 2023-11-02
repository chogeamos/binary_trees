#include "binary_trees.h"

/**
 * array_to_avl - Builds an AVL tree from an array.
 *
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in the array.
 *
 * Return: A pointer to the root node of the created AVL tree, NULL on failure.
 */
avl_t *array_to_avl(int *array, size_t size)
{
    avl_t *tree = NULL;
    size_t index, jndex;

    if (array == NULL)
    {
        return NULL;
    }

    for (index = 0; index < size; index++)
    {
        int is_duplicate = 0;

        for (jndex = 0; jndex < index; jndex++)
        {
            if (array[jndex] == array[index])
            {
                is_duplicate = 1;
                break;
            }
        }

        if (!is_duplicate)
        {
            if (avl_insert(&tree, array[index]) == NULL)
            {
                return NULL;
            }
        }
    }

    return tree;
}
