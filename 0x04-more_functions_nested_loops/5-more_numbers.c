#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 10 tables
 */
void more_numbers(void)
{
	int i, j, k, l;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			k = j / 10;
			l = j % 10;
			if (k != 0)
				_putchar(k + '0');
			_putchar(l + '0');
		}
		_putchar('\n');
	}
}
