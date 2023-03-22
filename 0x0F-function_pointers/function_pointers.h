#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*
 * Desc: header file containing all libraries and prototypes used
 * for `0-print_name.c`, `1-array_iterator.c`, `2-int_index.c`.
 */

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
