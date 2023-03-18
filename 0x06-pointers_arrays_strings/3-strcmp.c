#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: an integer <0 if s1 less than s2
 * an integer =0 if s1 match s2
 * an ineteger >0 if s1 greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
