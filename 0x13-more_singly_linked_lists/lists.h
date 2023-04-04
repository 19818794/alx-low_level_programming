#ifndef LISTS_H
#define LISTS_H

/*
 * Desc: header file containing all libraries, structures, and prototypes used
 * by `0x13. C - More singly linked lists` project.
 */

#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
