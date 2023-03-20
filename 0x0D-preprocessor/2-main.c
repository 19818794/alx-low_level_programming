#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

#endif

/**
 * main - Entry point
 *
 * Description: 'prints the name of the file it was compiled from,
 * followed by a new line.'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
