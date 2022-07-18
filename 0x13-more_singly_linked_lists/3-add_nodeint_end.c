#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint_end - adds a new node at the end of
 * listint_t list.
 * @head: pointer to the address of the
 * listint_t list's head.
 * @n: integer for the new node.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *end;
new_node = (listint_t *)malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
*head = new_node;
else
{
end = *head;
while (end->next != NULL)
{
end = end->next;
end->next = new_node;
}
}
return (*head);
}
