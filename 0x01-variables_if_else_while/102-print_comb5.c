#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'this peogram prints all comb two-two-digit using putchar'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l, m, n;

	i = 0;
	while (i <= 98)
	{
		k = (i / 10 + '0');
		l = (i % 10 + '0');
		j = 0;
		while (j <= 99)
		{
			m = (j / 10 + '0');
			n = (j % 10 + '0');
			if (i < j)
			{
				putchar(k);
				putchar(l);
				putchar(' ');
				putchar(m);
				putchar(n);
				if (i != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
