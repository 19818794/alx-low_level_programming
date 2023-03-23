#include "variadic_functions.h"

/**
 * print_numbers - prints numbers passed in all its paramters,
 * followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 * @...: a variable number of paramters to calculate the sum of.
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");
}
