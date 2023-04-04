#include <stdio.h>
#include "lists.h"
/**
 * print_listint-prints all the data in the elements of listint_t
 * @h:head of linked list
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d", h->n);
		h = h->next;

		i++;
	}
	return (i);
}
