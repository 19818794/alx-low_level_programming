#include <stdbool.h>
#include "main.h"
/**
 * *cap_string - capitalizes all words of a string.
 * @str: the string to change
 *
 * Return: the string after changes
 */
char *cap_string(char *str)
{
	char *ptr = str;
	bool cond;

	while (*ptr != '\0')
	{
		cond = (*ptr == 32 || *ptr == 9 || *ptr == 10 || *ptr == 44 ||
		*ptr == 59 || *ptr == 46 || *ptr == 33 || *ptr == 63 ||
		*ptr == 34 || *ptr == 40 || *ptr == 41 || *ptr == 123 ||
		*ptr == 125);
		if (cond)
		{
			ptr++;
			cond = (*ptr == 32 || *ptr == 9 || *ptr == 10 ||
			*ptr == 44 || *ptr == 59 || *ptr == 46 || *ptr == 33 ||
			*ptr == 63 || *ptr == 34 || *ptr == 40 || *ptr == 41 ||
			*ptr == 123 || *ptr == 125);
			if (cond)
			{
				ptr++;
				cond = (*ptr == 32 || *ptr == 9 || *ptr == 10 ||
				*ptr == 44 || *ptr == 59 || *ptr == 46 ||
				*ptr == 33 || *ptr == 63 || *ptr == 34 ||
				*ptr == 40 || *ptr == 41 || *ptr == 123 ||
				*ptr == 125);
				if (cond)
				{
					ptr++;
				}
			}
			if (*ptr >= 97 && *ptr <= 122)
			{
				*ptr = *ptr - 32;
				ptr++;
			}
		}
		else
		{
			ptr++;
		}
	}
	return (str);
}
