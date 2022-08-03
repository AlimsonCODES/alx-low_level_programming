#include "lists.h"

/**
 * print_dlistint - print linked list
 * @h: head of linked list
 * Return: number of linked lists
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	printf("-> %ld elements\n", len);
	return (len);
}
