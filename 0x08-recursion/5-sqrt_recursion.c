#include <stdio.h>
#include "main.h"
int _sqrt_rec(long int m, long int n);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: a number
 *
 * Return: If n does not have a natural square root, the function returns -1
 * otherwise returns the natural square root of n
 */
int _sqrt_recursion(int n)
{
	long int k;

	k = (long int)n;
	return (_sqrt_rec(1, k));
}

/**
 * _sqrt_rec - returns the natural square root of a number.
 * @m: natural square root
 * @n: a number
 * Return: If n does not have a natural square root, the function returns -1
 * otherwise returns the natural square root of n
 */
int _sqrt_rec(long int m, long int n)
{
	long int next_m;

	next_m = (m + (n / m)) / 2;
	if (m > n)
	{
		return (-1);
	}
	else if (((m * m) <= n) && (((m + 1) * (m + 1)) > n))
	{
		if ((m * m) == n)
		{
			return (m);
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		return (_sqrt_rec(next_m, n));
	}
}
