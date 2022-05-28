#include "lists.h"

/**
 * listint_len - returns number
 * of elements in list
 * @h: parameter
 * Return: numbernodes
 */

size_t listint_len(const listint_t *h)
{
size_t numbernodes = 0;
while (h != NULL)
{
h = h->next;
numbernodes++;
}
return (numbernodes);
}
