#include "variadic_functions.h"

/**
 * print_strings - prints strings passed in all its paramters,
 * followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 * @...: a variable number of paramters to calculate the sum of.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *str;

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(p, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");
}
