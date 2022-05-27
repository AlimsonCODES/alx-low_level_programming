#include "lists.h"

/**
 * print_list - prints parameters
 * @h: address to head
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t nodelen = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s", 0, "nil");
		else
			printf("[%d] %s", h->len, h->str);

		h = h->next;
		nodelen++;
	}
	return (nodelen);
}
