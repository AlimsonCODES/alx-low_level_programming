#include "lists.h"

/**
 * insert_dnodeint_at_index - adds node at nth index
 * @h: head node
 * @idx: index to add node
 * @n: data for node to be added
 * Return: pointer to nth node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int i;

	new = NULL;
	if (idx = 0)
		new = add_dnodeint(h, n);
	else
	{
		temp = *h;
		i = 1;
		if (temp->prev != NULL)
			temp = temp->prev;
		while (temp != NULL)
		{
			if (i == idx)
			{
				if (temp->next == NULL)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new != NULL)
					{
						new->n = n;
						new->next = temp->next;
						new->prev = temp;
						temp->next->prev = new;
						temp->next = new;
					}
				}
				break;
			}
			temp = temp->next;
			i++;
		}
	}
	return (new);
}
