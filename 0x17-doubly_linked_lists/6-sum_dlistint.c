#include "lists.h"

/**
 * sum_dlistint - sum all data in linked list
 * @head: pointer to head
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	sum = 0
	while (head->next != NULL)
		sum = sum + head->n;

	sum = sum + head->n;
	return (sum);
}
