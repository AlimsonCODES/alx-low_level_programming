#include "lists.h"

/**
 * delete_dnodeint_at_index - frees nth node
 * @head: headof list
 * @index: nth node
 * Return: nth node
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int len;

	len = 0;
	if (*head == NULL)
		return (-1);
	temp = NULL;
	temp = *head;
	while (temp->prev != NULL)
		temp = temp->prev;

	while (temp != NULL)
	{
		if (len == index)
		{
			if (temp->next == NULL)
			{
				temp->prev->next = NULL;
				free(temp);
				temp = NULL;
			}
			else
			{
				temp->next->prev = temp->prev;
				temp->prev->next = temp->next;
				free(temp);
				temp = NULL;
			break;
		temp = temp->next;
		len++;
	}
	return (1);
}
