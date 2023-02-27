#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: generates random valid passwords for the program 101-crackme
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i, n, sum, tab[100];

	sum = 0;
	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		tab[i] = rand() % 78;
		sum += (tab[i] + '0');
		putchar(tab[i] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	return (0);
}
