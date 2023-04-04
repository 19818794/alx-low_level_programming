#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the linked list to add the node to.
 * @idx: index of the list where the new node should be added, it starts at 0.
 * @n: the node's data to be added in idx position.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	ptr = *head;
	if (ptr == NULL)
	{
		if (idx == 0)
		{
			tmp->next = NULL;
			*head = tmp;
			return (*head);
		}
		else
			return (NULL);
	}
	else
	{
		idx--;
		while (idx != 0 && ptr->next != NULL)
		{
			ptr = ptr->next;
			idx--;
		}
		if (idx != 0)
			return (NULL);
		tmp->next = ptr->next;
		ptr->next = tmp;
	}
	return (tmp);
}
