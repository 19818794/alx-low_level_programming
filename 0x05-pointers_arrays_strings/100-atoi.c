#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to convert
 *
 * Return: converted string
 */
int _atoi(char *s)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			k *= -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (j >= 0)
		{
			j = j * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			j  = j * 10 - (s[i] - '0');
				i++;
		}
	}
	k *= -1;
	return (j * k);
}
