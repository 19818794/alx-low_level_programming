#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the program's name, followed by a new line.
 *
 * @argc: a count of the arguments supplied to the program.
 * @argv: array of pointers to the strings which are those arguments.
 *
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		if (argc == 0)
			printf("%s\n", *argv);
	}
	return (0);
}
