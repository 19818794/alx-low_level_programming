#include "lists.h"

size_t _listint_count(listint_t *head);

/**
 * free_listint_safe - frees a listint_t list safely, and sets the head to NULL
 * @h: the list to be freed.
 *
 * Return: the size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr;
	size_t count, i;

	count = _listint_count(*h);
	if (count == 0)
	{
		while (h != NULL && *h != NULL)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			count++;
		}
	}
	else
	{
		for (i = 0; i < count; i++)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
		}
	}
	*h = NULL;
	h = NULL;
	return (count);
}

/**
 * _listint_count - counts the number of unique nodes in a looped linked list.
 * @head: the looped list to be checked.
 *
 * Return: the number of unique nodes in the looped list,
 * or 0 if the list is empty, contains only one element, or not looped.
 */
size_t _listint_count(listint_t *head)
{
	listint_t *second, *third;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	second = head->next;
	third = (head->next)->next;
	while (third)
	{
		if (second == third)
		{
			second = head;
			while (second != third)
			{
				count++;
				second = second->next;
				third = third->next;
			}
			second = second->next;
			while (second != third)
			{
				count++;
				second = second->next;
			}
			return (count);
		}
		second = second->next;
		third = (third->next)->next;
	}
	return (0);
}
