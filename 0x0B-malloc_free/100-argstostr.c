#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments
 * @ac: allocated memory space
 * @av: 2D array
 * Return: array
 */
char *argstostr(int ac, char **av)
{
char *arr;
int len = 0, i = 0, j, k = 0;
if (ac <= 0 || av == NULL)
return (NULL);
for (; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
len++;
}
len++;
arr = malloc(len *sizeof(char));
if (arr == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
arr[k] = av[i][j];
k++;
}
arr[k] = '\n';
k++;
}
arr[k] = '\0';
return (arr);
}
