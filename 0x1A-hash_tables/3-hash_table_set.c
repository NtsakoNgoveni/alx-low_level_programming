#include "hash_tables.h"
/**
 *hash_table_set - inserts new item to hash table
 *@ht: hash table to be modified
 *@key: key of the new item
 *@value: value of the new item
 *Return: returns 1 if succesful and zero if failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_item;
    hash_node_t *tmp;
    unsigned long int index, i;

    new_item = malloc(sizeof(hash_node_t));
    if (!new_item || !key || *key == '\0' || !ht)
        return 0;

	    index = key_index((const unsigned char *)key, ht->size);
    for (i = index; ht->array[i]; i++)
{ 
    if (strcmp(key, ht->array[index]->key))
    {
	    free(new_item);
	    free(ht->array[index]->value);
	    ht->array[index]->value = strdup(value);
	    return (1);
    }
}

    new_item->value = strdup(value);
    new_item->next = NULL;
    new_item->key = strdup(key);

    if (index >= ht->size)
    {
        free(new_item->value);
        free(new_item->key);
        free(new_item);
        return 0;
    }

    if (ht->array[index] == NULL)
    {
        ht->array[index] = new_item;
    }
    else
    {
        tmp = ht->array[index];
        new_item->next = tmp;
	ht->array[index] = new_item;
    }

    return 1;
}
