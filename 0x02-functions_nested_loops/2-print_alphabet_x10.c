#include "main.h"
/**
 * print_alphabet_x10 - writes alphabets in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char var;

	for (i = 0; i < 10; i++)
	{
		for (var = 'a'; var <= 'z'; var++)
		{
			_putchar(var);
		}
		_putchar('\n');
	}
}
