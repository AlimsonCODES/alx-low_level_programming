#include "lists.h"
/**
 * add_node - adds new node
 * @head: link embeded in new node
 * @str: char data it holds
 * Return: link to new node
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
size_t len;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
for (len = 0; str[len]; len++)
;
new_node->len = len;
new_node->next = *head;
*head = new_node;
return (*head);
}
