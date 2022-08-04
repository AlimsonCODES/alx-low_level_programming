#include "lists.h"

/**
 * *get_dnodeint_at_index - gets a nth node
 * @head: headof list
 * Return: nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp, *h;
	int len;

	len = 0;
	if (head == NULL)
		return NULL;
	
	temp = head;
	while (temp->prev != NULL)
		temp = temp->prev;
	h = temp;

	while (temp->next != NULL)
	{
		temp = temp->next;
		len++;
	}
	if (index > len)
		return NULL;
	temp = h;

	if (index != len)
	{
		temp = temp->next;
		len++;
	}
	else
		return (temp);
}



