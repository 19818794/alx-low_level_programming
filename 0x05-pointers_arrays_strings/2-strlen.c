#include "main.h"
/**
 *  _strlen - returns the length of a string.
 *  @s: the string to check
 *
 * Return: the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
