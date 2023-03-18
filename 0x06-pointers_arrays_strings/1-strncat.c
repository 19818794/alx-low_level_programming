#include "main.h"
/**
 * *_strncat - concatenates two strings.
 * @dest: the first string
 * @src: the second string
 * @n: number of bytes to use
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 1;

	while (*ptr != '\0')
		ptr++;
	while (*src != '\0' && i <= n)
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}
