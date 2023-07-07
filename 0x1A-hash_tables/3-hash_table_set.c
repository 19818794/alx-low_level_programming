#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table, and in case of
 * collision, adds the new node at the beginning of the list.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: is the key, and it can not be an empty string.
 * @value: is the value associated with the key. It must be duplicated,
 * and it can be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_element, *current;

	if (!ht || !key || !*key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}
	new_element = malloc(sizeof(hash_node_t));
	if (new_element == NULL)
	{
		free(new_element);
		return (0);
	}
	new_element->key = strdup(key);
	new_element->value = strdup(value);
	new_element->next = ht->array[index];
	ht->array[index] = new_element;

	return (1);
}
