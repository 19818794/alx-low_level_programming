#include "main.h"

/**
 * flip_bits - calculates the number of bits you would need to flip to get
 * from one number to another.
 * @n: the first number.
 * @m: the second number.
 *
 * Return: the number of bits that need to be changed in order to transform
 * one number into another number.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, y;
	unsigned int count;
	int i;

	xor = n ^ m;
	count = 0;
	i = sizeof(unsigned long int) * 8 - 1;
	while (i >= 0)
	{
		y = xor >> i;
		if ((y & 1) != 0)
			count++;
		i--;
	}
	return (count);
}

