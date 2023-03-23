#include "variadic_functions.h"

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 * @...: a variable number of paramters to calculate the sum of.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list p;
	int i, j;
	char *separator = "";
	print_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(p, format);
	i = 0;
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].printer(p);
			separator = ", ";
		}
		i++;
	}
	va_end(p);
	printf("\n");
}

/**
 * print_char - Prints a char.
 * @arg: a list of arguments pointing to the character to be printed.
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - prints an int.
 * @arg: a list of arguments pointing to the integer to be printed.
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - prints a float.
 * @arg: a list of arguments pointing to the float to be printed.
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - prints a string.
 * @arg: a list of arguments pointing to the string to be printed.
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}
