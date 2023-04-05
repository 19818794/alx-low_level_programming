#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: looped linked list.
 *
 * Return: the address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *second, *third;

	if (head == NULL || head->next == NULL)
		return (NULL);
	second = head->next;
	third = (head->next)->next;
	while (third)
	{
		if (second == third)
		{
			second = head;
			while (second != third)
			{
				second = second->next;
				third = third->next;
			}
			return (second);
		}
		second = second->next;
		third = (third->next)->next;
	}
	return (NULL);
}
