#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: given number
 * Return: If n is lower than 0, the function return -1 to indicate an error,
 * otherwise return factorial of the given number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
