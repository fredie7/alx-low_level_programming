#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - creates a 2D array of integers
 * @width: defines the height
 * @height: defines the width
 * Return: double pointer to array
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **arr;
i = 0;
j = 0;
if (height <= 0 || width <= 0)
{
return (NULL);
}
arr = (int **)malloc(height * sizeof(int *));
if (arr == NULL)
{
return (NULL);
}
while (i < height)
{
*(arr + i) = (int *)malloc(width * sizeof(int));
if (*(arr + i) == NULL)
{
for (j = 0; j < i; j++)
{
free(arr[j]);
}
free(arr);
return (NULL);
}
while (j < width)
{
arr[i][j] = 0;
}
i++;
}
return (arr);
}
