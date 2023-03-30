#include "lists.h"

/**
 * list_len - counts the number of elements in a linked list_t list.
 * @h: the list to be counted.
 *
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
