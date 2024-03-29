#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: the list to be reversed.
 *
 * Return: a pointer to the first node of the reversed list,
 * or NULL if it is an empty list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	previous = NULL;
	next = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;
	return (*head);
}
