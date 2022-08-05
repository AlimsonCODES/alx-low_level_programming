#include "lists.h"

/**
 * delete_dnodeint_at_index - frees nth node
 * @head: headof list
 * @index: nth node
 * Return: nth node
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head_, *h2;
	unsigned int i;
	
	head_ = *head;

	if (head_ != NULL)
		while (head_->prev != NULL)
			head_ = head_->prev;

	i = 0;
	while (head_ != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = head_->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = head_->next;

				if (head_->next != NULL)
					head_->next->prev = h2;
			}

			free(head_);
			return (1);
		}
		h2 = head_;
		head_ = head_->next;
		i++;
	}
	return (-1);
}
