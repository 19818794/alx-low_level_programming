#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table.
 * @size: the size of the array.
 *
 * Return: a pointer to the newly created hash table,
 * otherwise If something went wrong, returns NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table;
	unsigned long int index;

	if (size < 1)
		return (NULL);
	shash_table = malloc(sizeof(shash_table_t));
	if (shash_table == NULL)
		return (NULL);
	shash_table->size = size;
	shash_table->shead = NULL;
	shash_table->stail = NULL;
	shash_table->array = malloc(sizeof(shash_node_t *) * size);
	if (shash_table->array == NULL)
	{
		free(shash_table);
		return (NULL);
	}
	for (index = 0; index < size; index++)
		shash_table->array[index] = NULL;

	return (shash_table);
}

/**
 * set_spair - allocates a pair to the sorted hash table.
 * @key: is the key, and it can not be an empty string.
 * @value: is the value associated with the key. It must be duplicated,
 * and it can be an empty string.
 * Return: pointer to the new node.
 */
shash_node_t *set_spair(const char *key, const char *value)
{
	shash_node_t *ptr = malloc(sizeof(shash_node_t));

	if (ptr == NULL)
		return (NULL);
	ptr->key = malloc(strlen(key) + 1);
	if (ptr->key == NULL)
		return (NULL);
	ptr->value = malloc(strlen(value) + 1);
	if (ptr->value == NULL)
		return (NULL);
	strcpy(ptr->key, key);
	strcpy(ptr->value, value);

	return (ptr);
}

/**
 * set_only - sets a pair to the first array element.
 * @ht: the hash table.
 * @key: is the key, and it can not be an empty string.
 * @value: is the value associated with the key. It must be duplicated,
 * and it can be an empty string.
 * @index: the key's index.
 *
 * Return: the node, otherwise NULL if it failed.
 */
shash_node_t *set_only(shash_table_t *ht, const char *key,
			     const char *value, unsigned long int index)
{
	shash_node_t *ptr = set_spair(key, value);

	if (ptr == NULL)
		return (NULL);
	ptr->next = NULL;
	ht->array[index] = ptr;

	return (ptr);
}

/**
 * update_node - updates the value of a given node.
 * @node: pointer to the node.
 * @value: string to put at the node.
 *
 * Return: 1 on success, 0 otherwise.
 */
int update_node(shash_node_t *node, const char *value)
{
	if (strcmp(node->value, value) == 0)
		return (1);
	free(node->value);
	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (0);
	strcpy(node->value, value);

	return (1);
}

/**
 * set_front - sets a pair node to front of given index's list.
 * @ht: the hash table.
 * @key: is the key, and it can not be an empty string.
 * @value: is the value associated with the key. It must be duplicated,
 * and it can be an empty string.
 * @index: the key's index.
 *
 * Return: a new node, otherwise NULL if it failed.
 */
shash_node_t *set_front(shash_table_t *ht, const char *key,
			     const char *value, unsigned long int index)
{
	shash_node_t *node = set_spair(key, value);

	if (node == NULL)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;

	return (node);
}

/**
 * set_first - sets the first addition to the sorted list.
 * @ht: the hash table.
 * @node: pointer to the first node on the table.
 *
 * Return: Always 1.
 */
int set_first(shash_table_t *ht, shash_node_t *node)
{
	node->sprev = NULL;
	node->snext = NULL;
	ht->shead = node;
	ht->stail = node;

	return (1);
}

/**
 * set - sets a new node before the given old node.
 * @ht: the hash table.
 * @old_node: the node to place the new node in front of.
 * @node: the new node to place in front of the old one.
 *
 * Return: Always 1 (success).
 */
int set(shash_table_t *ht, shash_node_t *old_node, shash_node_t *node)
{
	if (old_node->sprev == NULL)
		ht->shead = node;
	node->snext = old_node;
	node->sprev = old_node->sprev;
	old_node->sprev = node;
	if (node->sprev != NULL)
		node->sprev->snext = node;

	return (1);
}

/**
 * set_end - sets a node at the end of the sorted list.
 * @ht: the hash table.
 * @node: the node to place at the end.
 *
 * Return: Always 1 (success).
 */
int set_end(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *old_node = ht->stail;

	ht->stail = node;
	node->snext = NULL;
	node->sprev = old_node;
	old_node->snext = node;

	return (1);
}

/**
 * shash_table_set - adds an element to the hash table, and in case of
 * collision, adds the new node at the beginning of the list.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: is the key, and it can not be an empty string.
 * @value: is the value associated with the key. It must be duplicated,
 * and it can be an empty string.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *tmp, *ptr;

	if (!ht || !key || !*key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	if (tmp == NULL)
		tmp = set_only(ht, key, value, index);
	else
	{
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
				return (update_node(tmp, value));
			tmp = tmp->next;
		}
		tmp = set_front(ht, key, value, index);
	}
	if (tmp == NULL)
		return (0);
	if (ht->shead == NULL)
		return (set_first(ht, tmp));
	ptr = ht->shead;
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, tmp->key) >= 0)
			return (set(ht, ptr, tmp));
		ptr = ptr->snext;
	}
	return (set_end(ht, tmp));
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: the hash table you want to look into.
 * @key: the key you are looking for.
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *ptr = NULL;
	unsigned int index;

	if (ht != NULL && key != NULL)
	{
		index = key_index((unsigned char *)key, ht->size);
		if (ht->array[index] == NULL)
			return (NULL);
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		ptr = ht->array[index];
		while (ptr != NULL)
		{
			if (strcmp(ptr->key, key) == 0)
				return (ptr->value);
			ptr = ptr->next;
		}
	}

	return (NULL);
}

/**
 * shash_table_print - prints a hash table.
 * @ht: is the hash table.
 *
 * Return: void.
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned int counter = 0;
	shash_node_t *ptr = ht->shead;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	while (ptr != NULL)
	{
		if (counter > 0)
			printf(", ");
		printf("'%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->snext;
		counter++;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints sorted key and value in reverse.
 * @ht: the hash table.
 *
 * Return: void.
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ptr = ht->stail;
	unsigned long int counter = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (ptr != NULL)
	{
		if (counter > 0)
			printf(", ");
		printf("'%s': '%s'", ptr->key, ptr->value);
		ptr = ptr->sprev;
		counter++;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table.
 * @ht: the hash table.
 *
 * Return: void.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index = 0;
	shash_node_t *ptr;

	while (index < ht->size)
	{
		while (ht->array[index] != NULL)
		{
			ptr = ht->array[index]->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = ptr;
		}
		index++;
	}
	free(ht->array);
	free(ht);
}
