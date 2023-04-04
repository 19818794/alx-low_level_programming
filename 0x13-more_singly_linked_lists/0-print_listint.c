#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: the list to be printed.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
