#include "lists.h"
/**
 * add_nodeint-adds new at beginning of list
 * @head:pointer to the head of the list
 * @n:data of the new node
 * Return:address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
