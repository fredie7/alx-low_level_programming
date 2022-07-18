#include "lists.h"

/**
* free_listint2 - frees a listint_t list
*and sets the head to NULL.
* @head: pointer to pointer to head node
* Return: void
*/
void free_listint2(listint_t **head)
{
listint_t *temp_val;
if (head)
{
while (*head)
{
temp_val = *head;
*head = temp_val->next;
free(temp_val);
}
}
}
