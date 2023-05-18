#include "lists.h"
/**
 * insert_dnodeint_at_index - adds a new node at specified index
 * @h: pointer to the head of the list to be modified
 * @idx: where the node will be added
 * @n: the data of the new node
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
if (*h != NULL)
(*h)->prev = new;
*h = new;
new->prev = NULL;
return (new);
}
while (ptr && i < (idx - 1))
{
i++;
ptr = ptr->next;
}
if (!ptr || i != (idx - 1))
{
free(new);
return (NULL);
}
ahead = ptr->next;
ptr->next = new;
new->prev = ptr;
new->next = ahead;
if (ahead != NULL)
	ahead->prev = new;
return (new);
}
