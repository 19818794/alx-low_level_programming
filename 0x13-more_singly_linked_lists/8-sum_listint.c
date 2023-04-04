#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n) of a linked list.
 * @head: a linked list.
 *
 * Return: the sum of all the data of a linked list,
 * otherwise 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int count = 0;

	if (ptr == NULL)
		return (count);
	while (ptr != NULL)
	{
		count += ptr->n;
		ptr = ptr->next;
	}
	return (count);
}
