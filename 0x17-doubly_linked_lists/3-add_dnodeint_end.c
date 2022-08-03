#include "lists.h"

/**
 * *add_dnodeint_end - adds a node to beginning of doubly list
 * @head: pointer to current head of list
 * @n: data variable for new node
 * Return: address to new head of linked list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *t;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->next = NULL;
	temp->n = n;

	t = *head;
	if (t != NULL)
	{
		while (t->next != NULL)
			t = t->next;
		t->next = temp;
	}
	else
	{
		*head = temp;
	}

	temp->prev = t;
	return (temp);
}
