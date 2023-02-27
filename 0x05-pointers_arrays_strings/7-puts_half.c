#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string to check
 *
 * Return:void
 */
void puts_half(char *str)
{
	int len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	str -= (len / 2);
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
