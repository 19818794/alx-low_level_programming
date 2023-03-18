#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: a count of the arguments supplied to the program.
 * @av: array of pointers to the strings which are those arguments.
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *buffer;
	int len, i, j;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	len = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
			len++;
		}
		i++;
	}
	len += ac + 1;
	buffer = malloc(sizeof(char) * len);
	if (buffer == NULL)
		return (NULL);
	i = 0;
	len = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			buffer[len] = av[i][j];
			j++;
			len++;
		}
		buffer[len] = '\n';
		i++;
		len++;
	}
	return (buffer);
}
