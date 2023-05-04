#include "main.h"

/**
 * get_bit - calculate the value of a bit at a given index.
 * @n: the given number.
 * @index: the given index, starting from 0 of the bit you want to get.
 *
 * Return: the value of a bit at a given index,
 * or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < (sizeof(unsigned long int) * 8))
		return (0);
	for (i = 0; i < (sizeof(unsigned long int) * 8) ; i++, n >>= 1)
	{
		if (i == index)
			return (n & 1);
	}
	return (-1);
}

