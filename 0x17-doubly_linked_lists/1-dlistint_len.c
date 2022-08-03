#include "lists.h"

/**
 * dlistint_len - check how many nodes
 * @h: pointer to head
 * Return: length
 */

size_t dlistint_len(const dlistint_t *h)
{
	int len;

	len = 0;

	if (h == NULL)
		return (len);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
