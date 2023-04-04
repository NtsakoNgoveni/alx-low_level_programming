#include <stdlib.h>
#include "lists.h"
/**
 * free_listint-frees linstint memomery from the heap
 * @head:head of the list
 * Return:void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
