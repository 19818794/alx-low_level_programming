#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: a linked list.
 * @index: the index of the node that should be deleted, it starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;

	current = *head;
	previous = *head;
	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (index > 0 && current->next != NULL)
		{
			previous = current;
			current = current->next;
			index--;
		}
		if (index != 0)
			return (-1);
		previous->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);
}
