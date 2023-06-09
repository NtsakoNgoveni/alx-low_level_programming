#include "hash_tables.h"
/**
 * hash_table_print - prints a has table
 * @ht: Table to be printed
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	char *sep = ", ";
	unsigned long int size = ht->size;
	unsigned long int i;

	if (!ht)
		return;

	if (ht->array == NULL)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	for (i = 0; i < size; i++)
	{
		if (ht->array[i] == NULL)
			continue;
		ptr = ht->array[i];
		while (ptr)
		{
			if (i == (size - 1) && ptr->next == NULL)
				sep = "";

			printf("'%s': '%s'%s", ptr->key, ptr->value, sep);
			ptr = ptr->next;
		}
	}
	printf("}\n");
}
