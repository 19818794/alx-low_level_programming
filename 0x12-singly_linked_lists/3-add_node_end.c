#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the list to add the string to.
 * @str: the string to add to the list.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *tmp;

	ptr = *head;
	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = NULL;
	if (ptr == NULL)
		*head = tmp;
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = tmp;
	}
	return (*head);
}
