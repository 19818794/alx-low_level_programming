#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: array contains values from this minimum value
 * @max: array contains values to this maximum value
 *
 * Return: a pointer to the newly created array,
 * or NULL if it fails or min > max
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
