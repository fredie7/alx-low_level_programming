#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: pointer to integer array
 * @size: array size
 * @cmp: pointer to the function
 * Return: index if first element or -1 on failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
i = 0;
if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);
}
while (i < size)
{
if (cmp(array[i]) != 0)
{
return (i);
}
i++;
}
return (-1);
}
