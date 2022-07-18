#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list.
 * @head: A pointer to the address of listint_t list's head.
 *
 * Return: 0 if the list is empty.
 * else - the head node's data (n).
 */
int pop_listint(listint_t **head)
{
listint_t *temp_val;
int value;
if (*head == NULL)
return (0);
temp_val = *head;
value = (*head)->n;
*head = (*head)->next;
free(temp_val);
return (value);
}
