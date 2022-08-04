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
	while (temp->prev != NULL)
		temp = temp->prev;

	while (temp != NULL)
	{
		if (i == idx)
			break;
		temp = temp->next;
		i++;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = temp->prev;
	new->next = temp->next;
	temp = temp->next;
	new->prev = temp->prev;
	temp->prev = new;
	temp = new->prev;
	temp->next = new;
	return (new);
}
