#include "3-calc.h"

/**
 * main - Entry point
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Description: 'performs simple operations.'
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int), arg1, arg2, result;
	char operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	operator = *argv[2];
	if ((operator == '/' || operator == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(arg1, arg2);
	printf("%d\n", result);
	return (0);
}
