#include "lists.h"

size_t _listint_len(const listint_t *head);

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: the list to be printed.
 *
 * Return: the number of nodes in the list,
 * if the function fails, exit the program with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, i;

	count = _listint_len(head);
	if (count == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}
	else
	{
		for (i = 0; i < count; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
		exit(98);
	}
	return (count);
}

/**
 *  _listint_len - counts the number of unique nodes in a looped linked list.
 * @head: the looped list to be checked.
 *
 * Return: the number of unique nodes in the looped list,
 * or 0 if the list is empty, contains only one element, or not looped.
 */
size_t _listint_len(const listint_t *head)
{
	const listint_t *second, *third;
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
