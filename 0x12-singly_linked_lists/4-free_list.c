#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: the list to be freed.
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
