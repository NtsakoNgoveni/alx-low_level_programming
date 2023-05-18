#include "lists.h"
/**
 * sum_dlistint - calculate the suem of the intergers in the list elements
 * @head: head of llist
 * Return: sum of the data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	if (!head)
		return (sum);
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
