#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: The number of tables
 *
 * Return: number of tables
 */
void print_times_table(int n)
{
	int i, j, multi;

	if (n <= 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				multi = i * j;
				if (multi <= 99)
					_putchar(' ');
				if (multi <= 9)
					_putchar(' ');
				if (multi >= 100)
				{
					_putchar((i / 100) + '0');
					_putchar(((i / 10)) % 10 + '0');
				}
				else if (multi <= 99 && i >= 10)
				{
					_putchar((i / 10) + '0');
				}
				_putchar((i % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
