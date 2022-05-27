#include "lists.h"

/**
 * list_len - list amounts of ele
 * @h: parameter
 * Return: struct
 */

size_t list_len(const list_t *h)
{
size_t n;
n = 0;
while (h != NULL)
{
h = h->next;
n++;
}
return (n);
}
