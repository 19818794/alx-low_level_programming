#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: a doubly linked list.
 * @index: the index of the node, starting from 0.
 *
 * Return: the nth node of a doubly linked list,
 * otherwise if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int size = 0;

	while (ptr != NULL)
	{
		size++;
		ptr = ptr->next;
	}
	if (head == NULL || index > size)
		return (NULL);
	ptr = head;
	while (index > 0)
	{
		ptr = ptr->next;
		index--;
	}
	return (ptr);
}
