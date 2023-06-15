#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: a doubly linked list.
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		free(head);
		head = ptr;
	}
}
