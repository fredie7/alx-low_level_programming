#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - excute a function on array element
 * @array: pointer to array
 * @size: array size
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
i = 0;
if (array != NULL && action != NULL && size > 0)
{
while (i < size)
{
action(array[i]);
i++;
}
}
}
