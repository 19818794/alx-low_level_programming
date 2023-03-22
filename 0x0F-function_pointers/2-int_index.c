#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: the array to search in.
 * @size: the number of elements in the array.
 * @cmp: a pointer to the function to be used to compare values.
 *
 * Return: the index of the first element for
 * which the cmp function does not return 0,
 * if no element matches or size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
