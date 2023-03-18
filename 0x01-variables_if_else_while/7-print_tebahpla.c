#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'this peogram prints the alphabets in inverse lowercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char var = 'z';

	while (var >= 'a')
		putchar(var--);
	putchar('\n');
	return (0);
}
