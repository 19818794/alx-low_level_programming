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
	char lower_char = 'a';

	while (lower_char <= 'z')
	{
		if (lower_char != 'e' && lower_char != 'q')
			putchar(lower_char);
		lower_char++;
	}
	putchar('\n');
	return (0);
}
