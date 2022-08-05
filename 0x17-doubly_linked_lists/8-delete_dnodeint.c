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
	temp = *head;
	while (temp->prev != NULL)
		temp = temp->prev;
	do
	{
		if (len == index)
		{
			if (temp->next == NULL)
			{
				if (len == 0)
					free(temp);
				else
				{
					temp->prev->next = NULL;
					free(temp);
				}
				return (1);
			}
			else
			{	
				if (len == 0)
				{
					temp->next->prev =  NULL;
					free(temp);
				}
				else
				{
					temp->next->prev = temp->prev;
					temp->prev->next = temp->next;
					free(temp);
				}
				return (1);
			}
			break;
			temp = temp->next;
			len++;
		}
	} while (temp != NULL);
	return (-1);
}
