#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: a name to printed
 * @f: pointer to function used
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
