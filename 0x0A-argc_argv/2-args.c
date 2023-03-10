#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all arguments it receives.
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
		printf("%s\n", *argv++);
	}
	return (0);
}
