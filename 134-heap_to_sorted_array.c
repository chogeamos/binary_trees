#include "binary_trees.h"

/**
<<<<<<< HEAD
 * heap_to_sorted_array - Converts a Binary Max Heap to a sorted integer array.
=======
 * heap_to_sorted_array - Converts a Binary Max Heap to a sorted array-integer.
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
 *
 * @heap: A pointer to the root node of the heap to convert.
 * @size: An address to store the size of the array.
 *
<<<<<<< HEAD
 * Return: A sorted array in descending order.
=======
 * Return: Sorted in descending order
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
 */
int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
	int *array;
	int extract, i = 0;
	size_t heap_size;

	if (!heap)
		return (NULL);
<<<<<<< HEAD

	heap_size = binary_tree_size(heap);
	*size = heap_size;

	array = malloc(heap_size * sizeof(int));
	if (!array)
		return (NULL);

=======
	heap_size = binary_tree_size(heap);
	*size = heap_size;
	array = malloc(heap_size * sizeof(int));
	if (!array)
		return (NULL);
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
	while (heap)
	{
		extract = heap_extract(&heap);
		array[i] = extract;
		i++;
	}
<<<<<<< HEAD

=======
>>>>>>> f5ccdb1adc8b5bf9bf7fa3ebc5e3938f5e169c16
	return (array);
}
