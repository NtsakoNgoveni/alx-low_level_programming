#include "lists.h"
/**
 * pop_listint-deletes head node of list
 * @head:pointer to head of list
 * Return:head nodes data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp = *head;

	if (*head == NULL || !head)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}
