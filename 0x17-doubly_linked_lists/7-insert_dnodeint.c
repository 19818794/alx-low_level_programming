#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: a pointer to a doubly linked list.
 * @idx: the index of the list where the new node should be added, starts at 0.
 * @n: the integer to be added.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *ptr_1, *ptr_2;

	/* Create a node */
	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = NULL;
	/* Handle case where head is NULL and index is out of bounds */
	if (*h == NULL && idx > 0)
		return (NULL);
	/* Inserting at the beginning or when head is NULL */
	if (*h == NULL || idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = tmp;
		tmp->next = *h;
		*h = tmp;
		return (tmp);
	}
	/* Traverse the list to find the position to insert */
	ptr_1 = *h;
	while (idx > 1 && ptr_1->next != NULL)
		ptr_1 = ptr_1->next, idx--;
	/* If index is out of bounds, free the allocated node and return NULL*/
	if (idx > 1)
	{
		free(tmp);
		return (NULL);
	}
	/* Inserting a new node at an intermediate position */
	ptr_2 = ptr_1->next;
	ptr_1->next = tmp;
	tmp->next = ptr_2;
	tmp->prev = ptr_1;
	if (ptr_2 != NULL)
		ptr_2->prev = tmp;
	return (tmp);
}
