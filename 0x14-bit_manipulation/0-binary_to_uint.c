#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number,
 * otherwise 0 if b is NULL or there is one or more chars in the string b
 * that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int length, multiples_of_2, i;

	if (b == NULL)
		return (0);
	length = 0;
	while (b[length] != '\0')
		length++;
	uint = 0;
	multiples_of_2 = 1;
	for (i = (length - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			uint += multiples_of_2;
		multiples_of_2 *= 2;
	}
	return (uint);
}

