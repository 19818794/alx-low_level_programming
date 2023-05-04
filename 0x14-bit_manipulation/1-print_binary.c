#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to be converted.
 *
 * Return: binary representation of a number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int var = 1;
	int flag = 0;

	var <<= (sizeof(unsigned long int) * 8 - 1);
	while (var > 0)
	{
		if ((n & var) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag != 0)
			_putchar('0');
		var >>= 1;
	}
	if (flag == 0)
		_putchar('0');
}

