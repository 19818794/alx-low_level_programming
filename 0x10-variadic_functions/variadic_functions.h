#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
 * Desc: header file containing all libraries, structures, and prototypes used
 * by `0x10-variadic_functions` project.
 */

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct Print_t - type struct Print_t.
 * @symbol: a symbol representing a data type.
 * @printer: a function pointer to a function that prints a data type
 * corresponding to symbol.
 *
 * Description: defining a type with a typedef print_t.
 */
typedef struct Print_t
{
	char *symbol;
	void (*printer)(va_list arg);

} print_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
