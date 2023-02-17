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
	char char_var[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;	
	for (i = 0; i < 26; i++)
		putchar(char_var[i]);
	putchar('\n');
	return (0);
}
