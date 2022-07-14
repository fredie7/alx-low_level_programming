#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * _strlen - gets length of the string
 * @s: string
 * Return: length of the string
 */
int _strlen(const char *s)
{
int i;
for (i = 0; s[i]; i++)
;
return (i);
}
/**
 * _strdup - recreates the string's duplicate function
 * @src: source of string
 * Return: pointer to malloc
 */
void *_strdup(const char *src)
{
int length, i;
char *dest;
length = _strlen(src);
dest = malloc((length + 1) * sizeof(char));
if (dest == NULL)
return (NULL);
for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
/**
 * add_node_end - adds new nodes to the end of the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *arr, *current;
char *dupstr;
if (str == NULL)
return (NULL);
dupstr = _strdup(str);
if (dupstr == NULL)
return (NULL);
arr = malloc(sizeof(list_t));
if (arr == NULL)
return (NULL);
arr->str = dupstr;
arr->len = _strlen(str);
arr->next = NULL;
if (*head == NULL)
{
*head = arr;
return (*head);
}
current = *head;
while (current->next != NULL)
current = current->next;
current->next = arr;
return (*head);
}
