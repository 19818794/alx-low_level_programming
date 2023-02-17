#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'this peogram prints all alphabets in lowercase except q and e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_char[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
		putchar(lower_char[i]);
	putchar('\n');
	return (0);
}
