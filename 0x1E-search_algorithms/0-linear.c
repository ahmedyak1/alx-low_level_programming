#include "search_algos.h"

/**
 * A linear search function is used to find a value in an array.
 * Using the linear search algorithm to find integers.
 * The array has a reference to the first element to search in.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value) /* if (*(array + i) == value) */
			return (i);
	}
	return (-1);
}
