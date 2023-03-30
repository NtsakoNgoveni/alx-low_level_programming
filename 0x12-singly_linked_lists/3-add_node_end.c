#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end-adds a node to the end of the list
 * @str: data of the new node
 * @head: pointer to head of list
 * Return: address of new node or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (!ptr)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;

	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = ptr;
	return (ptr);
}

