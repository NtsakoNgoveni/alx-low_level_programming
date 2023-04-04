#include "lists.h"
/**
 * add_nodeint_end-adds new node at end of list
 * @head:pointer to the head of the linked list
 * @n:data of the new node
 * Return:address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *tmp = *head;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = ptr;
	return (ptr);
}
