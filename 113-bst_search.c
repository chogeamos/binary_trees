#include "binary_trees.h"

/**
 * array_to_bst - Creates a Binary Search Tree from an array.
 *
 * @array: A pointer to the first element of the array to be transformed.
 * @size: The number of elements in the array.
 *
 * Return: A pointer to the root node of the generated BST, or NULL if it fails.
 */
bst_t *array_to_bst(int *array, size_t size)
{
    bst_t *tree = NULL;
    size_t index, jndex;

    // Check if the input array is NULL
    if (array == NULL)
        return (NULL);

    // Iterate through the elements in the input array
    for (index = 0; index < size; index++)
    {
        // Search for duplicate values in the array
        for (jndex = 0; jndex < index; jndex++)
        {
            // If a duplicate is found, stop searching
            if (array[jndex] == array[index])
                break;
        }

        // If no duplicates are found, insert the value into the BST
        if (jndex == index)
        {
            // Attempt to insert the unique value into the BST
            if (bst_insert(&tree, array[index]) == NULL)
                return (NULL);
        }
    }

    // Return the root node of the generated BST
    return (tree);
}

