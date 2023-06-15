#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: a doubly linked list.
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t num_of_nodes = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		num_of_nodes++;
		ptr = ptr->next;
	}

	return (num_of_nodes);
}
