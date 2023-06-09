#include "hash_tables.h"
/**
 *hash_table_set - inserts new item to hash table
 *@ht: hash table to be modified
 *@key: key of the new item
 *@value: value of the new item
 *Return: returns 1 if succesful and zero if failed
 */

int hash_table_set(hash_table_t *ht, const  char *key, const char *value)
{
hash_node_t *new_item;
hash_node_t *tmp;
unsigned long int index, keys;
const char *value_dup;

new_item = malloc(sizeof(hash_node_t));
if (!new_item)
	return (0);
value_dup = strdup(value);
new_item->value = value_dup;
new_item->next = NULL;
new_item->key = strdup(key);
index = key_index(key, ht->size);

if (index >= ht->size)
{
free(new_item);
free(ht->array);
free(ht);
return (0);
}

if (ht->array[index] == NULL)
{
ht->array[index] = new_item;
}
else
{
tmp = ht->array[index];
while (tmp->next)
{
tmp = tmp->next;
}
tmp->next = new_item;
}
return (1);
}
