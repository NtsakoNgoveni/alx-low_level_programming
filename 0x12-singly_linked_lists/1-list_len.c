#include "lists.h"
#include <stdio.h>
/**
 * list_len-returns the number of elements in the linked list
 * @h:head of the list
 * Return:number of node
 */
size_t list_len(const list_t *h)
{

	size_t i = 0;

	while (h)
	{
		i++;
		h->next;
	}
	return (i);
}
