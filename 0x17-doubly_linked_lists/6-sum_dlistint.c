#include "lists.h"

/**
 * sum_dlistint - sum all data in linked list
 * @head: pointer to head
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}
	return (sum);
}
