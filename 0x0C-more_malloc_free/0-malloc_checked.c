#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  allocates memory using malloc.
 * @b: memory size allocated
 * Return: pointer to an allocated memory or exit with 98
 */
void *malloc_checked(unsigned int b)
{
void *arr;
arr = malloc(b);
if (!arr)
{
exit(98);
}
return (arr);
}
