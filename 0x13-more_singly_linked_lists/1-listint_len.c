#include "lists.h"

/**
 * listint_len - counts the number of elements in a linked listint_t list.
 * @h: the linked list to be counted.
 *
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
