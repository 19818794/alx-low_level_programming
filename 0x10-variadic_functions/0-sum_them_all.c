#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its paramters.
 * @n: the number of paramters passed to the function.
 * @...: a variable number of paramters to calculate the sum of.
 *
 * Return: the sum of all parameters,
 * otherwise 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(p, n);
	for (i = 0; i < n ; i++)
	{
		sum += va_arg(p, const unsigned int);
	}
	va_end(p);
	return (sum);
}
