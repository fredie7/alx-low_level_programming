#include "lists.h"
/**
 * list_len - finds the number of nodes in a linked list_t list
 * @h: pointer to linked list
 * Return: number of nodes on the list
 */

size_t list_len(const list_t *h)
{
size_t i;
i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
