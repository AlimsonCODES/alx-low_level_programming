#include "lists.h"

/**
 * *get_dnodeint_at_index - gets a nth node
 * @head: headof list
 * @index: nth node
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int len;

	len = 0;
	if (head == NULL)
		return (NULL);

	temp = head;
	if (temp == NULL)
		return (NULL);
	while (temp->prev != NULL)
		temp = temp->prev;
	head = temp;

	while (temp->next != NULL)
	{
		len++;
		temp = temp->next;
	}
	if (index > len)
		return (NULL);
	temp = h;

	while (index != len)
	{
		temp = temp->next;
		len++;
	}
	return (temp);
}
