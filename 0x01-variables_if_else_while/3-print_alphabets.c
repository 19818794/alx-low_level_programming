#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'this peogram prints alphabets in lowercase then in uppercase'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower_char[26] = "abcdefghijklmnopqrstuvwxyz";
	char upper_char[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
		putchar(lower_char[i]);
	for (i=0; i < 26; i++)
		putchar(upper_char[i]);
	putchar('\n');
	return (0);
}
