#include "lists.h"
#include <string.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: pointer to the head of the list.
 * @idx: index of the listint_t list where the new
 * node should be added - indices start at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: NULL if the function fails.
 * else - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newNode, *copy = *head;
unsigned int node;
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
if (idx == 0)
{
newNode->next = copy;
*head = newNode;
return (newNode);
}
for (node = 0; node < (idx - 1); node++)
{
if (copy == NULL || copy->next == NULL)
return (NULL);
copy = copy->next;
}
newNode->next = copy->next;
copy->next = newNode;
return (newNode);
}
