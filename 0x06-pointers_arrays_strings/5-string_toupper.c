#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string to be changed
 *
 * Return: string after changes
 */
char *string_toupper(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 97 && *ptr <= 122)
			*ptr = *ptr - 32;
		ptr++;
	}
	return (str);
}
