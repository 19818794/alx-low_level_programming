#include <stdio.h>
/**
 * main - Entry point
 * Description: inds and prints the sum of the even-valued terms
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	unsigned long int j, k, tmp, sum;

	j = 1;
	k = 2;
	sum = 0;
	for (i = 1; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
			sum += j;
		tmp = j + k;
		j = k;
		k = tmp;
	}
	printf("%lu\n", sum);
	return (0);
}
