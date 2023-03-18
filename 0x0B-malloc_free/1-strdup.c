#include <stdlib.h>
#include "main.h"
unsigned int _str_len(char *str);
char *_str_cpy(char *str, char *dest);
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string given
 *
 * Return: a pointer to the duplicated string
 * or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *buffer;
	unsigned int size;

	if (str == NULL)
		return (NULL);
	size = _str_len(str) + 1;
	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
		return (NULL);
	_str_cpy(str, buffer);
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
/**
 * _str_cpy - copies a string to another
 * @str: string to be copied
 * @dest: string to be copied to
 *
 * Return: a ponter dest
 */
char *_str_cpy(char *str, char *dest)
{
	int i = 0;

	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
