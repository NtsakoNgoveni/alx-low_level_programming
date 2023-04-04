#include "lists.h"
/**
 * list_len - finds length of linked list
 * @h : head of linked list
 * Return: number of nodes
 */
size_t list_len(const listint_t *h)
{
	const listint_t *fast = h;
	const listint_t *slow = h;
	size_t len = 0;

	if (!h || h->next == NULL)
		return (0);
	while (slow)
	{
		if (slow == fast)
		{
			slow = h;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
				len++;
			}
			slow = slow->next;

			while (slow != fast)
			{
				slow = slow->next;
					len++;
			}
			return (len);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - Prints a listint_t list with a loop.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num, i;

	num = list_len(head);

	if (num == 0)
	{
		while (head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			num++;
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < num; i++)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
				head = head->next;
		}
	}
	return (num);
}
