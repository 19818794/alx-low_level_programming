#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int check(char *s);

/**
 * main - Entry point
 *
 * Description: adds positive numbers.
 *
 * @argc: a count of the arguments supplied to the program.
 * @argv: array of pointers to the strings which are those arguments.
 *
 * Return: 0 (success) or 1 (error)
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc >= 2)
	{
		i = 1;
		sum = 0;
		while (i < argc)
		{
			if (check(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}

/**
 * check - check a string if contain digits or not
 * @s: string to check
 *
 * Return: 0 if not digit, 1 if it is a digit
 */
int check(char *s)
{
	unsigned int i;

	i = 0;
	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}
