#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head:head of list
 * Return: to pointer to start of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *start = NULL;
	listint_t *lead = (*head)->next;

	if (*head == NULL)
		return (NULL);

	while (lead)
	{
		(*head)->next = start;
		start = *head;
		*head = lead;
		lead = lead->next;
	}
	(*head)->next = start;
	return (*head);
}
