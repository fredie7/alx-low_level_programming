#include "lists.h"
#include <stdio.h>
/**
 * listint_len -returns the number of elements in a
 * linked listint_t list.
 * @h: pointer to the head of the listint_t list.
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
size_t node;
for (node = 0; h != NULL; node++)
{
h = h->next;
}
return (node);
}
