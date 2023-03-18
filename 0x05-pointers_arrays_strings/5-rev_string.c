#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char str;

	len = 0;
	str = s[0];

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		len--;
		str = s[i];
		s[i] = s[len];
		s[len] = str;
	}
}
