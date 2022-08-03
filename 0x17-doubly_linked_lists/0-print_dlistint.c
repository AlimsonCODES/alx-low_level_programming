#include "lists.h"

/**
 * print_dlistint - print linked list
 * @h: head of linked list
 * Return: number of linked lists
 */

size_t print_dlistint(const dlistint_t *h)
{
	int len;

	len = 0;

	if (h == NULL)
		return (len);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}

	printf("-> %d elements\n", len);
	return (len);
}
