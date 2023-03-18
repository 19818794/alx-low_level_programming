#include "main.h"
int _prime(int n, int itr);
/**
 * is_prime_number - check an input number if it is prime number
 * @n: input number
 *
 * Return: 1 if the input integer is a prime number
 * otherwise return 0.
 */
int is_prime_number(int n)
{
	int itr = 2;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (_prime(n, itr));
}
/**
 * _prime - check number if it is prime or not
 * @n: number to check
 * @itr: number of iterate
 *
 * Return: return 1 or 0
 */
int _prime(int n, int itr)
{
	if (itr == n - 1)
		return (1);
	else if (n % itr == 0)
		return (0);
	if (n % itr != 0)
		return (_prime(n, itr + 1));
	return (0);
}
