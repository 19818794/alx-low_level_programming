#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string to be searched
 * @accept: the prefix to be measured
 *
 * Return: the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bt = 0;
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				bt++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (bt);
			}
		}
		s++;
	}
	return (bt);
}
