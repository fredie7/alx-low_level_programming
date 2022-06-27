#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string parameter
 * @s2: seond string parameter
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
int i, j, z, size;
char *arr;
z = 0;
if (s1 == NULL)
{
i = 0;
}
else
{
for (i = 0; s1[i]; i++)
;
}
if (s2 == NULL)
{
s2 = 0;
}
else
{
for (j = 0; s2[j]; j++)
;
}
size = i + j + 1;
arr = malloc(size *sizeof(char));
if (arr == NULL)
{
return (NULL);
}
while (z < i)
{
*(arr + z) = s1[z];
z++;
}
for (z = 0; z < j; z++)
{
arr[z + i] = s2[z];
}
arr[i + j] = '\0';
return (arr);
}
