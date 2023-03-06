#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: memory area to be copied to
 * @src: memory area to be copied from
 * @n: bytes copied from memory area src.
 *
 * Return: a pointer to the memory area dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, m;

	m = n;
	for (i = 0; i < m; i++)
		dest[i] = src[i];
	return (dest);

}
