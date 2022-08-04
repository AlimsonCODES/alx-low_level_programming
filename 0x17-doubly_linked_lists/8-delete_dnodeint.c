#include "lists.h"

/**
 * delete_dnodeint_at_index - frees nth node
 * @head: headof list
 * @index: nth node
 * Return: nth node
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int len;

	len = 0;
	if (*head == NULL)
		return (-1);

	while (*head->prev != NULL)
		*head = *head->prev;

	while (*head != NULL)
	{
		if (len == index)
		{
			if (*head->next = NULL)
			{
				*head->prev->next = NULL;
				free(*head);
			}
			else
			{
				*head->next->prev = *head->prev;
				*head->prev->next = *head->next;
				free(*head);
			break;
		*head = *head->next;
		len++;
	}
	return (1);
}
