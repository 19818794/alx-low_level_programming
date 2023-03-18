#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: prints the minimum number of coins to make change for an amount
 * of money.
 *
 * @argc: a count of the arguments supplied to the program.
 * @argv: array of pointers to the strings which are those arguments.
 *
 * Return: 0 (success) or 1 (error)
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, total, change, aux;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]);
	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}
	i = change = aux = 0;
	while (coins[i])
	{
		if (total >= coins[i])
		{
			aux = (total / coins[i]);
			change += aux;
			total -= coins[i] * aux;
		}
		i++;
	}
	printf("%d\n", change);
	return (0);
}
