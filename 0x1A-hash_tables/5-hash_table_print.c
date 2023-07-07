#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: is the hash table.
 *
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0, flag = 0;
	hash_node_t *ptr = NULL;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	while (index < ht->size)
	{
		ptr = ht->array[index];
		while (ptr != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			flag = 1;
			ptr = ptr->next;
		}
		index++;
	}
	printf("}\n");
}
