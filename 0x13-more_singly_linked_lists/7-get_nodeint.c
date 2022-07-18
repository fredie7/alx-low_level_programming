#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the listint_t list.
 * @index: index of the node to locate - start at 0.
 *
 * Return: NULL if the node does not exit.
 * else - the found node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node = 0;
while (node < index)
{
if (head == NULL)
return (NULL);
head = head->next;
node++;
}
return (head);
}
