#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: a linked list.
 *
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t num_of_elements = 0;

	while (ptr != NULL)
	{
		num_of_elements++;
		ptr = ptr->next;
	}

	return (num_of_elements);
}
