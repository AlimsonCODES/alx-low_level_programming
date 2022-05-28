#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: param
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t numbernodes = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
numbernodes++;
}
return (numbernodes);
}
