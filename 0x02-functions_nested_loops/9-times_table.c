#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: 9 times table
 */
void times_table(void)
{
	int i, j, n, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;
			if (n > 9)
			{
				k = n % 10;
				l = (n - k) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(l + '0');
				_putchar(k + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}
}
