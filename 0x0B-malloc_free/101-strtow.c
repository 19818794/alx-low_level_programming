#include <stdlib.h>
#include "main.h"
int _word_len(char *str);
int _words_count(char *str);
/**
 * strtow - splits a string into words.
 * @str: the main string
 *
 * Return: a pointer to an array of strings (words),
 * or NULL if it fails
 */
char **strtow(char *str)
{
	char **buffer;
	int len, i, j, k, num_letters;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	len = _words_count(str);
	if (len == 0)
		return (NULL);
	buffer = malloc(sizeof(char *) * (len + 1));
	if (buffer == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < len)
	{
		while (str[k] == ' ')
			k++;
		num_letters = _word_len(str + k);
		buffer[i] = malloc(sizeof(char) * (num_letters + 1));
		if (buffer[i] == NULL)
		{
			for (; i >= 0; i--)
				free(buffer[i]);
			free(buffer);
			return (NULL);
		}
		j = 0;
		while (j < num_letters)
		{
			buffer[i][j] = str[k];
			k++;
			j++;
		}
		buffer[i][j] = '\0';
		i++;
	}
	return (buffer);
}
/**
 * _word_len - checks lenght of a word and position
 * @str: string to be cheked
 *
 * Return: lengh of the word and the indix marking the end of the word pointed
 * to using str.
 */
int _word_len(char *str)
{
	int i, len;

	i = 0;
	len = 0;
	while (*(str + i) != '\0' && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}
/**
 * _words_count - counts the number of words within a string
 * @str: the string to check
 *
 * Return: the number of words included
 */
int _words_count(char *str)
{
	int words, len, i;

	len = 0;
	words = 0;
	for (i = 0; *(str + i) != '\0'; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += _word_len(str + i);
		}
	}
	return (words);
}
