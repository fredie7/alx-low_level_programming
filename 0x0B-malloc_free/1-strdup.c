#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: string parameter
 * Return: char
 */

char *_strdup(char *str)
{
char *arr;
int num;
int j;
j = 0;
if (str == NULL)
{
return (NULL);
}
for (num = 0; str[num] != '\0'; num++)
;
arr = malloc((num * sizeof(char)) + 1);
if (arr == NULL)
{
return (NULL);
}
while (j < num)
{
*(arr + j) = *(str + j);
j++;
}
arr[j] = '\0';
return (arr);
}
