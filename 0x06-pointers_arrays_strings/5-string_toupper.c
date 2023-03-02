#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string to be changed
 *
 * Return: string after changes
 */
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str = *str - 32;
		str++;
	}
	return (str);
}
