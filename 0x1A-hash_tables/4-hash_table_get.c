#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into.
 * @key: the key you are looking for.
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr = NULL;
	unsigned int index;

	if (ht != NULL && key != NULL)
	{
		index = key_index((unsigned char *)key, ht->size);
		ptr = ht->array[index];
		if (ptr == NULL)
			return (NULL);
		while (strcmp(ptr->key, key) != 0)
			ptr = ptr->next;
		return (ptr->value);
	}

	return (NULL);
}
