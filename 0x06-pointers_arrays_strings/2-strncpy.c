#include "main.h"
/**
 * *_strncpy - copies a string.
 * @dest: the first string
 * @src: the second string
 * @n: number of bytes to use
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
		if (n >= 90)
			dest[i] = '\0';
	}
	return (dest);
}
