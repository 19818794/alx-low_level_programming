#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: the list to be popped from.
 *
 * Return: the head node’s data (n),
 * otherwise 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int n;

	if (ptr == NULL)
		return (0);
	n = ptr->n;
	ptr = ptr->next;
	free(*head);
	*head = ptr;
	return (n);
}
