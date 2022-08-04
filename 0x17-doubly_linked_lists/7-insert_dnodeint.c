#include "lists.h"

/**
 * insert_dnodeint_at_index - adds node at nth index
 * @h: head node
 * @idx: index to add node
 * @n: data for node to be added
 * Return: pointer to nth node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int i;

	i = 0;
	if (*h == NULL)
		return (NULL);

	temp = *h;
	while (*h->prev != NULL)
		*h = *h->prev;

	while (*h != NULL)
	{
		if (i == idx)
			break;
		*h = *h->next;
		i++;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	*h = *h->prev;
	new->next = *h->next;
	*h = *h->next;
	new->prev = *h->prev;
	*h->prev = new;
	*h = new->prev;
	*h->next = new;
	return (new);
}
