#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node-adds node to beginnignof list
 * @head:pointer to head of list
 * @str:data that will be added in the added list
 * Return:pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
