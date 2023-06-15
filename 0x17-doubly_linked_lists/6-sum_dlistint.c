#include "lists.h"

/**
 * sum_dlistint - calcules the sum of all the data (n) of a dlistint_t linked
 * list.
 * @head: a doubly linked list.
 *
 * Return: the sum of all the data of a doubly linked list,
 * otherwise if the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
