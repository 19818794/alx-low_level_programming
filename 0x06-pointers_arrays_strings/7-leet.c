#include "main.h"
/**
 * *leet - encodes a string into 1337.
 * @str: the string to encode
 *
 * Return: coded string
 */
char *leet(char *str)
{
	int i, j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] || (str[i] - 32) == leet[j])
				str[i] = j + '0';
		}
		i++;
	}
	return (str);
}
