#include "list.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list-Prints the data in a singly linked list
 * @h: head of linked list
 * Return:number of elements in linked list
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	list_t const *ptr = h;

	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (count);
}
