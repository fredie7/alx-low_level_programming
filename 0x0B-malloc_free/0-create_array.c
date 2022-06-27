#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of array
 * @c: array content
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
i = 0;
arr = malloc(size * sizeof(char));
if (size == 0 || !arr)
{
return (NULL);
}
else
{
while (i < size)
{
*(arr + i) = c;
i++;
}
}
return (arr);
}
