#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *ptr = head;

	while (ptr)
	{
		list_t *next = ptr->next;

		free(ptr->str);
		free(ptr);
		ptr = next;
	}
}
