#include "lists.h"
/**
 * get_dnodeint_at_index - getss a node at a specified index
 * @head: head of the list to be searched
 * @index: index to search for
 * Return: node at specified index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	if (index == 0)
		return (head);

	while (i < index && ptr)
	{
		ptr = ptr->next;
		i++;
	}
	if (i == index && ptr)
		return (ptr);
	else
		return (NULL);
}
