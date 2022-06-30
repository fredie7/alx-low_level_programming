#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string parameter
 * @s2: second string parameter
 * @n:  bytes allocation for s2
 * Return: pointer to the new space in memory or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)

{
char *arr;
int i;
unsigned int j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = 0;
while (s1[i] != '\0')
i++;
arr = malloc(sizeof(char) * (i + n + 1));
if (arr == NULL)
return (NULL);
i = j = 0;
while (s1[i] != '\0')
{
*(arr + i) = s1[i];
i++;
}
while (j < n && s2[j] != '\0')
{
*(arr + i) = s2[j];
i++;
j++;
}
*(arr + i) = '\0';
return (arr);
}
