#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Description: finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long int var, i, max;

	var = 612852475143;
	max = -1;
	while (var % 2 == 0)
	{
		max = 2;
		var /= 2;
	}
	for (i = 3; i <= sqrt(var); i += 2)
	{
		while (var % i == 0)
		{
			max = i;
			var /= i;
		}
	}
	if (var > 2)
		max = var;
	printf("%ld\n", max);
	return (0);
}
