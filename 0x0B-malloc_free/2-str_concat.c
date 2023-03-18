#include <stdlib.h>
#include "main.h"
unsigned int _str_len(char *str);
/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer points to a newly allocated space in memory,
 * which contains the contents of s1 followed by of s2, and null terminated,
 * or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *buffer;
	unsigned int len1, len2, size, i, j;

	len1 = 0;
	if (s1 != NULL)
		len1 = _str_len(s1);
	len2 = 0;
	if (s2 != NULL)
		len2 = _str_len(s2);
	size = len1 + len2 + 1;
	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
		return (NULL);
	i = 0;
	while (s1 != NULL && s1[i] != '\0')
	{
		buffer[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 != NULL && s2[j] != '\0')
	{
		buffer[i] = s2[j];
		i++;
		j++;
	}
	buffer[i] = '\0';
	return (buffer);
}
/**
 * _str_len - checks the lenght of a string
 * @str: string to check
 *
 * Return: lenght
 */
unsigned int _str_len(char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
