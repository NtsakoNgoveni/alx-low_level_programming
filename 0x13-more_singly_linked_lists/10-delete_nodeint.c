#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a specified index
 * @head: head of linked list
 * @index: index of linked list
 * Return: 1 if successful or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *ptr = *head;
	listint_t *tmp = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		ptr = ptr->next;
		free(*head);
	}

	while (i < (index - 1))
	{
		ptr = ptr->next;

		if (ptr == NULL)
		{
			return (-1);
		}
		i++;
	}
	tmp = ptr->next;
	ptr->next = ptr->next->next;
	free(tmp);
	return (1);
}
