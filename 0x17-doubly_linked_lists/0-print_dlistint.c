#include "lists.h"

/**
 * print_dlistint - print linked list
 * @h: head of linked list
 * Return: number of linked lists
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	printf("-> %d elements\n", count);
	return (count);
}
