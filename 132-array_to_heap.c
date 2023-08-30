#include "binary_trees.h"

/**
 * array_to_heap - This is a function that builds a Max Binary Heap tree
 *
 * @array: pointer to the first element of the array
 * @size: number of element in the array
 * Return: pointer to the root node of the created binay heap
 */
heap_t *array_to_heap(int *array, size_t size)
{
	heap_t *tree;
	size_t k;

	tree = NULL;

	for (k = 0; k < size; k++)
	{
		heap_insert(&tree, array[k]);
	}

	return (tree);
}
