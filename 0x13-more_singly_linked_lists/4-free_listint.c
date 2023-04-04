#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: the list to be freed.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
