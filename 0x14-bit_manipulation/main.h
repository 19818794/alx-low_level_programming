#ifndef MAIN_H
#define MAIN_H

/*
 * Desc: header file containing all libraries and prototypes used
 * by `0x14. C - Bit manipulation` project.
 */

#include <stdlib.h>

unsigned int binary_to_uint(const char *b);
int _putchar(char c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif

