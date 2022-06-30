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
unsigned int m, z, size;
char *arr;
z = 0;
if (s1 == NULL)
{
m = 0;
}
else
{
for (m = 0; s1[m]; m++)
;
}
if (s2 == NULL)
{
n = 0;
}
else
{
for (n = 0; s2[n]; n++)
;
}
size = m + n + 1;
arr = malloc(size *sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (z = 0; z < m; z++)
{
arr[z] = s1[z];
}
for (z = 0; z < n; z++)
{
arr[z + m] = s2[z];
}
arr[m + n] = '\0';
return (arr);
}
