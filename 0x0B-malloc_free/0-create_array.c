#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char.
 * @size: size for array of chars
 * @c: array of chars
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if  (size != 0)
	{
		buffer = malloc(sizeof(char) * size);
		if (buffer != NULL)
		{
			i = 0;
			while (i < size)
			{
				*(buffer + i) = c;
				i++;
			}
			return (buffer);
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}

}
