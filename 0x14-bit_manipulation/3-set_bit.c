#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: a given number.
 * @index: a given index, starting from 0 of the bit you want to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	m = 1 << index;
	*n |=  m;
	return (1);
}

