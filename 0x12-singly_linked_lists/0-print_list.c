#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the list to be printed.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = NULL;
	size_t count = 0;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
