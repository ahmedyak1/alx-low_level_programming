#include "search_algos.h"

/**
* The purpose of binary search is to locate a value in a sorted list.
* In order to find integers, the binary search algorithm is utilized.
 *  Return: the index where value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}

/**
 * binary_search_index is a recursive function that aids binary_search.
 * @array: Pointer to the initial element in the array to search for.
 * @l: left index of array.
 * @r: right index of array.
 * @value: value to look for.
 *
 * Return : the index where value is located.
 */

int binary_search_index(int *array, size_t l, size_t r, int value)
{
	int md;

	/* if l is ever > r, it means the element is not in the array */
	if (!array || l > r)
		return (-1);
	print_array(array, l, r);

	/* find the md-way index between index l and index r */
	md = l + (r - l) / 2;

	if (l == r)
		return (*(array + md) == value ? (int)md : -1);

	/* Return the index if the element located at the md-way index is found. */
	if (array[md] == value)
		return (md);
	/**
	 * Otherwise, if the element must be in the left-most portion of the portion.
	 *The array we are currently looking at is located in this portion.
	 */

	else if (array[md] > value)
		return (binary_search_index(array, l, md - 1, value));
	/**
	 * else if the element MUST be in the right-portion of the portion of the
	 * array we are currently looking at, search for it in this portion
	 */
	else
		return (binary_search_index(array, md + 1, r, value));
}

/**
 * print_array - Prints an array of integers.
 * @array: The array to be printed.
 * @l: The left index of the array.
 * @r: The right index of the array.
 */

void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	if (array)
	{
		printf("Searching in array: ");
		for (i = l; i < l + (r - l + 1); i++)
			printf("%d%s", *(array + i), i < l + (r - l) ? ", " : "\n");
	}
}

