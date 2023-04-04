#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts new node at a specified index
 * @head: head of the list
 * @idx: index the we will indert the new node
 * @n: data in the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (head ==NULL)
		return (NULL);
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
	}
	while (i < (idx - 1))
	{
		tmp = tmp->next;
		
		if (tmp == NULL)
		{
			free(ptr);
			return (NULL);
		}
		i++;
	}
	ptr->next = tmp->next;
	tmp->next = ptr;

	return (ptr);
}
