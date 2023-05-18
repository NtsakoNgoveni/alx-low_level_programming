#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a linked list
 * @head: head of list to be modified
 * @n: data of the new node
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || !head)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;

		return (new);
	}
	ptr = *head;
	while (ptr)
	{
		ptr = ptr->next;
	}
	ptr = new;
	new->prev = ptr;
	new->next = NULL;
	return (new);
}
