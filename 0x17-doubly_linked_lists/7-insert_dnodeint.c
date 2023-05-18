#include "lists.h"
/**
 * insert_dnodeint_at_index - adds a new node at specified index
 * @h: pointer to the head of the list to be modified
 * @idx: where the node will be added
 * @n: the dataof the new node
 * Return: address of new node or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *ptr = h ? *h : NULL, *ahead;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || !h)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		new->prev = NULL;
	}
	while (ptr && i < (idx - 1))
	{
		i++;
		ptr = ptr->next;
	}
	ahead = ptr->next;
	if (ptr && i == idx)
	{
		ptr->next = new;
		new->prev = ptr;
		ahead->prev = new;
		new->next = ahead;
		if (
		return (new);

	}
	return (NULL);
}
