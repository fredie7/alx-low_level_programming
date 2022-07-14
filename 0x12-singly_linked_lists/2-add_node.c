#include "lists.h"
#include <stdlib.h>
/**
 * strLength - gets length of the string
 * @s: string
 * Return: length of the string
 */
int strLength(const char *s)
{
int i;
for (i = 0; s[i]; i++)
;
return (i);
}
/**
 * add_node - add new nodes to the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */
list_t *add_node(list_t **head, const char *str)
{
int i, len;
char *content;
list_t *newNode;
if (str == NULL || head == NULL)
return (NULL);
len = strLength(str);
newNode = *head;
content = malloc((len + 1) * sizeof(char));
if (content == NULL)
return (NULL);
for (i = 0; str[i]; i++)
content[i] = str[i];
newNode = malloc(sizeof(list_t));
if (newNode == NULL)
{
free(content);
return (NULL);
}
newNode->str = content;
newNode->len = len;
newNode->next = *head;
*head = newNode;
return (newNode);
}
