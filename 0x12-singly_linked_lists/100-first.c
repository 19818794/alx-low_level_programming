#include <stdio.h>

void __attribute__((constructor)) first(void);

/**
 * first - prints a string before the main function is executed.
 *
 * Return: Always 0.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
