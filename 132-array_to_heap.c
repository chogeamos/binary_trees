#include "binary_trees.h"

/**
<<<<<<< HEAD
 * array_to_heap - Constructs a Max Binary Heap tree from an array.
 *
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in the array.
 *
 * Return: A pointer to the root node of the constructed heap, NULL on failure.
=======
 * array_to_heap - Builds a Max Binary Heap tree from an array.
 *
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of element in the array.
 *
 * Return: A pointer to the root node of the created one, NULL on failure.
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int index;
	heap_t *root = NULL;

	for (index = 0; index < size; index++)
<<<<<<< HEAD
		heap_insert(&root, array[index);
=======
		heap_insert(&root, array[index]);
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16

	return (root);
}
