#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head
 * @str: string
 * Return: head address
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *headArr;
size_t n;
headArr = *head;
new = malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
for (n = 0; new->str[n] != '\0'; n++)
;
new->len = n;
if (*head == NULL)
{
new->next = *head;
*head = new;
}
else
{
while (headArr->next != NULL)
{
headArr = headArr->next;
}
new->next = (headArr)->next;
(headArr)->next = new;
}
return (*head);
}
