#include "lists.h"

/**
 * print_list - prints parameters
 * @h: address to head
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
size_t node_len = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[%d] %s\n", 0, "nil");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
nodelen++;
}
return (nodelen);
}
