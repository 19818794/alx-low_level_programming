#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: a pointer to a linked list.
 * @n: the integer to be added.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->prev = NULL;
	tmp->n = n;
	tmp->next = *head;
	if (*head != NULL)
		(*head)->prev = tmp;
	*head = tmp;

	return (tmp);
}
