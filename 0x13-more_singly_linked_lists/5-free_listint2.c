#include "lists.h"
/**
 * free_listint2-frees a linked list
 * @head:is the head of the linked list
 * Return:void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head)
	{
		ptr = (*head)->next;
		free(head);
		*head = ptr;
	}
	*head = NULL;
}
