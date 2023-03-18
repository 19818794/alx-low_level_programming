#include <stdio.h>
/**
 * main - Entry point
 * Description: finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long int i, j;
	unsigned long int before0, before1, before2, after0, after1, after2;

	j = 1000000000;
	before0 = 1;
	after0 = 2;
	printf("%lu", before0);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", after0);
		after0 += before0;
		before0 = after0 - before0;
	}
	before1 = (before0 / j);
	before2 = (before0 % j);
	after1 = (after0 / j);
	after2 = (after0 % j);
	for (i = 92; i < 99; i++)
	{
		printf(", %lu", after1 + (after2 / j));
		printf("%lu", after2 % j);
		after1 += before1;
		before1 = after1 - before1;
		after2 += before2;
		before2 = after2 - before2;
	}
	printf("\n");
	return (0);
}
