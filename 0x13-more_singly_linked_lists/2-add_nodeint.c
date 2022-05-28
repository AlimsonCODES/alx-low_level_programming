#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of linked list
 * @head: list head param
 * @n: param
 * Return: address of the new element. NUll if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;
newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
newnode->next = *head;
*head = newnode;
return (*head);
}
