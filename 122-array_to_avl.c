#include "binary_trees.h"

/**
 * array_to_avl - A function that builds an AVL tree from an array.
 * @array: Pointer to the first element of the array to be converted.
 * @size: Number of elements in @array.
 *
 * Return: A pointer to the root node of the created AVL, or NULL on failure.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
	size_t k, l;

	if (array == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
	{
		for (l = 0; l < k; l++)
		{
			if (array[l] == array[k])
				break;
		}
		if (l == k)
		{
			if (avl_insert(&tree, array[k]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}
