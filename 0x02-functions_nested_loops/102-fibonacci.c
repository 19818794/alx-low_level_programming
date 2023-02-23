#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	unsigned long fibo1, fibo2, sum;

	fibo1 = 0;
	fibo2 = 1;
	for (n = 0; n < 50; n++)
	{
		sum = fibo1 + fibo2;
		printf("%lu", sum);
		fibo1 = fibo2;
		fibo2 = sum;
		if (n == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
