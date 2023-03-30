#include "lists.h"
#include <stdio.h>
/**
 * print_list-Prints the data in a singly linked list
 * @h: head of linked list
 * Return:number of elements in linked list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
