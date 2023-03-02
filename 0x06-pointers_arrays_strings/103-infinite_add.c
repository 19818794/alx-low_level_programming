#include "main.h"
char *add(char *n1, char *n2, char *r, int i);
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * *infinite_add - adds two numbers.
 * @n1: first number
 * @n2: second number
 * @r: the buffer to store the result
 * @size_r: the buffer size
 *
 * Return: pointer to the result, if the buffer r can store the result
 * otherwise 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, len1, len2;

	len1 = 0;
	for (i = 0; *(n1 + i); i++)
		len1++;

	len2 = 0;
	for (i = 0; *(n2 + i); i++)
		len2++;

	if (size_r <= len1 + 1 || size_r <= len2 + 1)
		return (0);

	n1 += len1 - 1;
	n2 += len2 - 1;
	*(r + size_r) = '\0';

	return (add(n1, n2, r, --size_r));
}

/**
 * *add - adds two numbers stored in two strings
 * @n1: first string
 * @n2: second string
 * @r: the buffer to store the result
 * @i: the current index of the buffer
 *
 * Return: pointer to the result, if the buffer r can store the result
 * otherwise 0
 */
char *add(char *n1, char *n2, char *r, int i)
{
	int k, l;

	l = 0;
	for (; *n1 && *n2; n1--, n2--, i--)
	{
		k = (*n1 - '0') + (*n2 - '0');
		k += l;
		*(r + i) = ((k % 10) + '0');
		l = k / 10;
	}
	for (; *n1; n1--, i--)
	{
		k = (*n1 - '0') + l;
		*(r + i) = (k % 10) + '0';
		l = k / 10;
	}
	for (; *n2; n2--, i--)
	{
		k = (*n2 - '0') + l;
		*(r + i) = (k % 10) + '0';
		l = k / 10;
	}
	if (l && i >= 0)
	{
		*(r + i) = (l % 10) + '0';
		return (r + i);
	}
	else if (l && i < 0)
	{
		return (0);
	}
	return (r + i + 1);
}
