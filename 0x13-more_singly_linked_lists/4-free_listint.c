#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the head of the listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
listint_t *temp_val;
while (head)
{
temp_val = head->next;
free(head);
head = temp_val;
}
}
