#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a listint_t linked list.
 * @head: the linked list to be searched in.
 * @index: the index of the node, starting at 0.
 *
 * Return: the nth node of a linked list,
 * otherwise NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr, *tmp;
	unsigned int i;

	ptr = head;
	if (ptr == NULL)
		return (NULL);
	for (i = 0; ptr != NULL && i < index; i++)
		ptr = ptr->next;
	if (i == index && ptr != NULL)
	{
		tmp = malloc(sizeof(listint_t));
		if (tmp == NULL)
			return (NULL);
		tmp->n = ptr->n;
		tmp->next = ptr->next;
	}
	else
		return (NULL);
	return (tmp);
}
