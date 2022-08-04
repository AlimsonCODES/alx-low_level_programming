#include "lists.h"

/**
 * *get_dnodeint_at_index - gets a nth node
 * @head: headof list
 * @index: nth node
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int len;

	len = 0;
	if (head == NULL)
		return (NULL);

	while (temp->prev != NULL)
		temp = temp->prev;

	while (head != NULL)
	{
		if (len == index)
			break;
		head = head->next;
		len++;
	}
	return (head);
}
