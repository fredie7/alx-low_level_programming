#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - adds a new node at the beginning of
 * listint_t list.
 * @head: A pointer to the address of the
 * listint_t list's head.
 * @n: integer for the new node.
 *
 * Return: NULL if function fails
 * else - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;
newNode = (listint_t *)malloc(sizeof(listint_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->n = n;
newNode->next = *head;
*head = newNode;
return (newNode);
}
