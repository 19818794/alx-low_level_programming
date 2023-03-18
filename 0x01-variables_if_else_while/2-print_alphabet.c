#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'this peogra prints the alphabet in lowercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char var = 'a';

	while (var <= 'z')
		putchar(var++);
	putchar('\n');
	return (0);
}
