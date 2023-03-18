#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * @n: the first n bytes of s2
 *
 * Return: a pointer point to a newly allocated space in memory,
 * or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2, finlen, i, j;

	len1 = 0;
	len2 = 0;
	finlen = 0;
	while (s1 != NULL && s1[len1] != '\0')
		len1++;
	while (s2 != NULL && s2[len2] != '\0')
		len2++;
	if (n < len2)
	{
		str = malloc(sizeof(char) * (len1 + n + 1));
		finlen = n;
	}
	else
	{
		str = malloc(sizeof(char) * (len1 + len2 + 1));
		finlen = len2;
	}
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < finlen)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
