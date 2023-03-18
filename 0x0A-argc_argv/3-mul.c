#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: multiplies two numbers.
 *
 * @argc: a count of the arguments supplied to the program.
 * @argv: array of pointers to the strings which are those arguments.
 *
 * Return: 0 (success) or 1 (error)
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
