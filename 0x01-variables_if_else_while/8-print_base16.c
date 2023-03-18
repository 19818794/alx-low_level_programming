#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'this peogram prints all numbers of base 16 using putchar'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char var;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (var = 'a'; var <= 'f'; var++)
		putchar(var);
	putchar('\n');
	return (0);
}
