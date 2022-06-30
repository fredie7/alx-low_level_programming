#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array or null
 */

int *array_range(int min, int max)

{
int *arr;
int i, size;
if (min > max)
return (NULL);
size = (max - min) + 1;
arr = malloc(sizeof(*arr) * size);
if (arr == NULL)
return (NULL);
for (i = 0; i < size && min <= max; i++, min++)
arr[i] = min;
return (arr);
}
