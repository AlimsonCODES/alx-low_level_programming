#include "lists.h"

/**
 * *add_dnodeint - adds a node to beginning of doubly list
 * @head: pointer to current head of list
 * @n: data variable for new node
 * Return: address to new head of linked list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	        return (NULL);

	temp->next = *head;
	temp->prev = NULL;
	temp->n = n;
	if (*head != NULL)
		(*head)->prev = temp;

	*head = temp;

	return (temp);
}
