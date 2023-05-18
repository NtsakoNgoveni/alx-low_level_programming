#include "lists.h"
/**
 * dlistint_len - determines the length of a linked list
 * @h: head of doubly linked list
 * Return: length of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
