#include "lists.h"

/**
 * add_node_end - adds new node
 * @head: param
 * @str: param
 * Return: struct
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastnode, *ptr;
	size_t len;

	lastnode = malloc(sizeof(list_t));
	if (lastnode == NULL)
		return (NULL);
	lastnode->str = strdup(str);
	for (len = 0; str[len]; len++)
		;
	lastnode->len = len;
	lastnode->next = NULL;

	ptr = *head;

	if (tmp == NULL)
	{
		*head = lastnode;
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = lastnode;
	}
	return (*head);
}
