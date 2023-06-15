#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index of a dlistint_t
 * linked list.
 * @head: a pointer to a doubly linked list.
 * @index: the index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr_1 =  *head;
	dlistint_t *ptr_2 = NULL;

	/* Handle the case where the list is empty */
	if (*head == NULL)
		return (-1);
	/* Handle the case where the index is in the beginning */
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr_1);
	}
	else
	{
		while (index > 0 && ptr_1 != NULL)
		{
			ptr_1 = ptr_1->next;
			index--;
		}
		/* Handle the case where the index is out of bounds */
		if (ptr_1 == NULL)
			return (-1);
		/* Handle the case where the index is in the end of the list */
		ptr_2 = ptr_1->prev;
		if (ptr_1->next == NULL)
		{
			ptr_2->next = NULL;
			free(ptr_1);
		}
		/* Handle case where the index is in an intermediate position*/
		else
		{
			ptr_2->next = ptr_1->next;
			ptr_1->next->prev = ptr_2;
			free(ptr_1);
		}
	}
	return (1);
}
