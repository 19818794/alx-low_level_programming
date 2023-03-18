#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: memory area pointed to
 * @b: constant byte of memory erea
 * @n: first n bytes of the memory area
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
